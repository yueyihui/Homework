#include <iostream>

using namespace std;

class Node {
    public:
        Node(int i);
        int data;
        Node *next;
};

Node::Node(int i) {
    data = i; 
    next = NULL;
}

class LinkList
{
public:
    void Insert(int);
    void Print();
private:
    Node* head;
};

void LinkList::Print() {
    cout<<">>>>>>>Print<<<<<<<<"<<endl;
    Node* tmp = head;
    while (tmp) {
        cout<<tmp->data<<endl;
        tmp = tmp->next;
    }
}

void LinkList::Insert(int i) {
    Node *node = new Node(i); 
    if (!head) {
        head = node;
    } else {
        Node *tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = node;
    }
}

int main(int argc, const char *argv[])
{
    LinkList *list = new LinkList();
    while (true) {
        int x;
        cin >> x;
        if (!cin.fail()) {
            list->Insert(x); 
        } else {
            break;
        }
    }
    list->Print();
    return 0;
}
