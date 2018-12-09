#include <iostream>
using namespace std;

int BinarySearch(int arr[], int x, int left, int right)
{
    while (left <= right) {
        int m = (left + right) / 2;
        if (arr[m] == x) {
            return m;
        } else if (arr[m] < x) {
            left = m + 1;
        } else {
            right = m -1;
        }
    }
    return -1; 
}

int main(int argc, const char *argv[])
{
    int Element[] = {2, 3, 4, 10, 20, 25, 30, 40};
    cout<<"Element[] = {2, 3, 4, 10, 20, 25, 30, 40}"<<endl;
    cout<<"Location of 2: "<<BinarySearch(Element, 2, 0, sizeof(Element)/4 - 1)<<endl;
    cout<<"Location of 4: "<<BinarySearch(Element, 4, 0, sizeof(Element)/4 - 1)<<endl;
    cout<<"Location of 10: "<<BinarySearch(Element, 10, 0, sizeof(Element)/4 - 1)<<endl;
    cout<<"Location of 40: "<<BinarySearch(Element, 40, 0, sizeof(Element)/4 - 1)<<endl;
    cout<<"Location of 13: "<<BinarySearch(Element, 13, 0, sizeof(Element)/4 - 1)<<endl;
    cout<<"Location of 28: "<<BinarySearch(Element, 28, 0, sizeof(Element)/4 - 1)<<endl;
    return 0;
}
