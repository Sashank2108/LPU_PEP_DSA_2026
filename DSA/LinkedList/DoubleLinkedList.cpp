#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=nullptr)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return ;
}

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtPos(Node* &head, int val, int pos){
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        return;
    }
    if(pos==1){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return ;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp!=nullptr;i++)
        temp = temp->next;
    if(temp==nullptr){
        cout << "The Position for the value " << val << " is out of bound" << endl;
        return;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    temp->next = newNode;
    return;
}

void print(Node* head){
    while(head!=nullptr){
        cout << head->data << " -> ";
        head=head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    insertAtStart(head, -5);
    insertAtStart(head, -10);
    insertAtPos(head, 0, 6);
    print(head);
}
