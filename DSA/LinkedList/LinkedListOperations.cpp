#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/partition-list/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
/*class Solution {
    public ListNode partition(ListNode head, int x) {
        // Dummy Pointer Approach
        ListNode left = new ListNode(-1);
        ListNode right = new ListNode(-1);
        ListNode temp = head;
        ListNode lp = left;
        ListNode rp = right;
        while(temp!=null){
            if(temp.val<x){
                lp.next = temp;
                lp = lp.next;
            }
            else{
                rp.next = temp;
                rp = rp.next;
            }
            temp = temp.next;
        }
        lp.next = right.next;
        rp.next = null;
        return left.next;
    }
}
*/


// Sorting the List
// https://leetcode.com/problems/sort-list/
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
/*class Solution {
    ListNode getMiddle(ListNode head){
        if(head==null || head.next==null) return head;
        ListNode slow = head;
        ListNode fast = head.next;
        while(fast!=null && fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    ListNode merge(ListNode l1, ListNode l2){
        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        while(l1!=null && l2!=null){
            if(l1.val <= l2.val){
                tail.next = l1;
                l1 = l1.next;
            }
            else{
                tail.next = l2;
                l2 = l2.next;
            }
            tail = tail.next;
        }
        while(l1!=null){
            tail.next = l1;
            l1 = l1.next;
            tail = tail.next;
        }
        while(l2!=null){
            tail.next = l2;
            l2 = l2.next;
            tail = tail.next;
        }
        return dummy.next;
    }

    public ListNode sortList(ListNode head) {
        if(head == null || head.next==null) return head;
        ListNode mid = getMiddle(head);
        ListNode left = head;
        ListNode right = mid.next;

        mid.next = null;

        ListNode sortedLeft = sortList(left);
        ListNode sortedRight = sortList(right);

        return merge(sortedLeft, sortedRight);
    }
}*/


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