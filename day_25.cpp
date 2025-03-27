//Q1. Delete Node in a Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        ListNode* temp=node->next;
        node->next=node->next->next;
        delete temp;
    }
};
//Time and space complexity is O(1).

//Q2. Linked List Insertion At End
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
class Solution {
  public:
    Node* insertAtEnd(Node *head, int x) {
        Node* newnode=new Node(x);
        if(head==NULL)
        {
            head=newnode;
            return head;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            return head;
        }
    }
};
//Time complexity is O(n) and space complexity is O(1).
