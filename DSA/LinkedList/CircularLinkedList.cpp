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
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        head->next = head;
        return ;
    }
    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtStart(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next!=head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void deleteAtEnd(Node* &head){
    if(head==nullptr) return;
    if(head->next == head){
        delete head;
        return ;
    }
    Node* temp = head;
    while(temp->next->next!=head)
        temp = temp->next;
    delete temp->next;
    temp->next = head;
    return ;
}

void deleteAtStart(Node* &head){
    if(head==nullptr) return ;
    if(head->next==head){
        delete head;
        head = nullptr;
        return ;
    }
    Node* temp = head;
    Node* tempHead = head;
    head = head->next;
    while(temp->next!=tempHead)
        temp = temp->next;
    temp->next = head;
    delete tempHead;
}

void print(Node* head){
    Node* temp = head;
    do{
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    while(temp!=head);
    cout << "Head" << endl;
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 5);
    insertAtEnd(head,10);
    insertAtEnd(head, 15);
    insertAtStart(head, 1);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    print(head);
    // deleteAtEnd(head);
    deleteAtStart(head);
    print(head);
    return 0;
}