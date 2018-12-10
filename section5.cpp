#include <iostream>
using namespace std;

void SelectSort(int A[], int n)
{
    for (int i = 0; i < n/2; i++) {
        int left = i;
        for (int j = i+1; j < n; j++) {
            if (A[j] < A[left]) {
                left = j;
            }
        }
        if (left != i) {
            int tmp = A[i];
            A[i] = A[left];
            A[left] = tmp;
        }

        int right = n-1-i;
        for (int j = n-1-i; j >= 0; j--) {
            if (A[j] > A[right]) {
                right = j;
            }            
        }
        if (right != n-1-i) {
            int tmp = A[n-1-i];
            A[n-1-i] = A[right];
            A[right] = tmp;
        }
    }
}

int main(int argc, const char *argv[])
{
    int arr[] = {9,1,41,14,32,1,12,8,6,27};
    cout<<"SelectSort {9,1,41,14,32,1,12,8,6,27}"<<endl;
    cout<<"Result: ";
    SelectSort(arr, sizeof(arr)/sizeof(int));
    for (int i = 0; i < 10; i++) {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
}
