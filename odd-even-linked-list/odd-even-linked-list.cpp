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
    ListNode* oddEvenList(ListNode* head) {
       ListNode* curr=head;
        
        
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        
        ListNode* ptr1=head->next;
        ListNode* ptr=head->next;
        
        while(curr->next!=NULL && ptr->next!=NULL)
        {            
            curr->next=curr->next->next;
            ptr->next=ptr->next->next;
            ptr=ptr->next;
            curr=curr->next;
        }
        curr->next=ptr1;
         return head;
    }
   
};