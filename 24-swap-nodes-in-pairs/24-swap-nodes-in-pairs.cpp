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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;
        ListNode* temp=NULL; 
                
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode* t=new ListNode(); 
        t->val=500; t->next=head; 
        head=t; curr=t;
        
        while(curr->next!=NULL)
        {
            temp=curr->next; 
            curr->next=curr->next->next; 
            if(curr->next!=NULL)
            curr=curr->next;
            temp->next=curr->next;
            curr->next=temp;
            if(curr->next!=NULL)
            curr=curr->next;
            
        }
        return head->next;
    }
};