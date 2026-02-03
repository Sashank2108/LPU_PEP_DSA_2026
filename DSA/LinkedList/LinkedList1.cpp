#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtEnd(Node* &head, int val){
    if(head==nullptr){
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while(temp->next!=nullptr)
        temp = temp->next;
    temp->next = new Node(val);
    return ;
}

void insertAtStart(Node* &head, int val){
    Node *newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return ;
    }
    Node* temp = head;
    newNode->next = temp;
    head = newNode;
    return ;
}

void insertAtPos(Node* &head, int val, int pos){
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        return ;
    }
    if(pos==1){
        newNode->next = head;
        head = newNode;
        return ;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp!=nullptr;i++){
        temp = temp->next;
    }
    if(temp==nullptr){
        cout << "The Position of the value " << val << " is out of bound." << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return ;
}

void deleteAtEnd(Node* &head){
    if(head==nullptr)   return;
    if(head->next==nullptr){
        Node* temp = head;
        delete temp;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next->next!=nullptr)
        temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

void deleteAtStart(Node* &head){
    if(head==nullptr)   return;
    Node* temp = head;
    head = head->next;
    delete temp;
    return ;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    insertAtStart(head, 20);
    insertAtStart(head, 1);
    insertAtPos(head, -1, 8);
    print(head);
    deleteAtEnd(head);
    deleteAtStart(head);
    print(head);
    return 0;
}