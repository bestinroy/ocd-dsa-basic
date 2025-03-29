//Q1. Reverse a Doubly Linked List
/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        DLLNode* temp=NULL;
        DLLNode* curr=head;
        while(curr!=NULL)
        {
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            curr=curr->prev;
        }
        return temp->prev;
    }
};
//Time complexity is O(n) and space complexity is O(1).

//Q2. Delete in a Doubly Linked List
/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        Node* temp=head;
        if(x==1)
        {
          temp=temp->next;
          delete head;
          temp->prev=NULL;
          return temp;
        }
        for(int i=1;temp!=NULL&&i<x;i++)
        {
            
            temp=temp->next;
        }
        if(temp==NULL)
        return head;
        if(temp->next!=NULL)
        temp->next->prev=temp->prev;
        if(temp->prev!=NULL)
        temp->prev->next=temp->next;
        delete temp;
        return head;
    }
};
//Time complexity is O(n) and space complexity is O(1).
