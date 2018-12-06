#include <iostream>
using namespace std;

class Node {
    public:
        Node(int);
        int data;
        Node* next;
};

Node::Node(int i) {
    data = i;    
    next = NULL;
}

class LinkList
{
    public:
        LinkList();
        Node* ReverseLink();
        void Print();
    private:
        Node* head;
};

LinkList::LinkList() {
    head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
}

Node* LinkList::ReverseLink() {
    Node *cur, *prev, *next;
    prev = NULL;
    next = NULL;
    cur = head;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}

void LinkList::Print() {
    Node *tmp = head;
    while (tmp) {
        cout<<tmp->data;
        cout<<"->";
        tmp = tmp->next;
    }
    cout<<"NULL"<<endl;
}

int main(int argc, const char *argv[])
{
    LinkList* list = new LinkList();
    list->Print();
    list->ReverseLink();
    list->Print();
    return 0;
}
