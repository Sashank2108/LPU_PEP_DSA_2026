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

void deleteAtPos(Node* &head, int pos){
    if(head==nullptr) return;
    if(pos==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return ;
    }
    Node* temp = head;
    for(int i=1;i<pos-1 && temp!=nullptr;i++)
        temp = temp->next;
    if(temp==nullptr){
        cout << "No Element to Delete at Pos " << pos << endl;
        return ;
    }
    Node* curr = temp->next;
    temp->next = temp->next->next;
    delete curr;
    return ;
}

// searching for the key
bool search(Node* head, int key){
    if(head==nullptr) return false;
    if(head->data == key) return true;
    search(head->next, key);
}

void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// count how many nodes have even values
void printEven(Node* head){
    int count = 0;
    while(head!=nullptr){
        if(head->data%2 == 0) count++;
        head = head->next;
    }
    cout << "There are " << count << " Even Values in the List.";
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 5);
    insertAtEnd(head, 10);
    insertAtEnd(head, 15);
    insertAtStart(head, 20);
    insertAtStart(head, 1);

    // printEven(head);

    if(search(head, 17)){
        cout << "The Key  is Present";
    }
    else cout << "The Key is Not Present";
    return 0;
}