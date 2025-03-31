//Q1. Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return false;
        ListNode* temp=head;
        ListNode* current=head;
        while(temp!=NULL&&temp->next!=NULL)
        {
            temp=temp->next->next;
            current=current->next;
            if(current==temp)
            {
                return true;
            }
        }
        return false;
    }
};
//Time complexity is O(n) and space complexity is O(1).

//Q2. Middle of the Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return head;
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        count=(count/2)+1;
        temp=head;
        for(int i=1;i<count;i++)
        {
            temp=temp->next;
        }
        return temp;
    }
};
//Time complexity is O(n) and space complexity is O(1).
