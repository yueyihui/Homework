#include <iostream>
using namespace std;

class Node {
    public:
        Node(int);
        int data;
        Node* left;
        Node* right;
};

Node::Node(int i) {
    data = i;
    left = NULL;
    right = NULL;
}

class Heap
{
    public:
        Heap();
        void Swap(Node*);
        void PrintInorder(Node*);
        int Size(Node*);
        Node* head;

    private:
        int amount; /*!< Member description */
};

Heap::Heap() {
    amount = 0;
    head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
}

void Heap::Swap(Node *head) {
    Node* tmp;
    tmp = head->right;
    head->right = head->left;
    head->left = tmp;
    if (head->left) {
        Swap(head->left);
    }
    if (head->right) {
        Swap(head->right);
    }
}

void Heap::PrintInorder(Node *node) {
    if (node == NULL)
        return;

    PrintInorder(node->left);

    cout << node->data << " ";

    PrintInorder(node->right);
}

int Heap::Size(Node *head) {
    if (head->left) {
        Size(head->left);
    }
    if (head->right) {
        Size(head->right);
    }
    return ++amount;
}

int main(int argc, const char *argv[])
{
    Heap heap;
    cout<<"Amount of Node is "<<heap.Size(heap.head)<<endl;
    cout<<"Before swap: ";
    heap.PrintInorder(heap.head);
    heap.Swap(heap.head);
    cout<<endl;
    cout<<"After  swap: ";
    heap.PrintInorder(heap.head);
    cout<<endl;
    return 0;
}

