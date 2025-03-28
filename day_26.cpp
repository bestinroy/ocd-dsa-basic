//Q1. Doubly linked list Insertion at given position
/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        Node* newnode=new Node(data);
        if((pos==0)&&(head->next==NULL))
        {
            newnode->prev=head;
            newnode->next=NULL;
            head->next=newnode;
            return head;
        }
        else
        {
            Node* temp=head;
            for(int i=0;i<pos;i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            newnode->prev=temp;
            if(temp->next!=NULL)
            temp->next->prev=newnode;
            temp->next=newnode;
        }
        return head;
    }
};
//Time complexity is O(n) and space complexity is O(1).

//Q2. Search in Linked List
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        Node* temp=head;
        for(int i=0;i<n;i++)
        {
            if(temp->data==key)
            return true;
            else temp=temp->next;
        }
        return false;
    }
};
//Time complexity is O(n) and space complexity is O(1).
