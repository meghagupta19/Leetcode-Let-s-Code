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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head; ListNode* prev=head; 
        if(head==NULL)
            return head;
        
        ListNode* temp=new ListNode();  //insert node at front
        temp->val= 500;
        temp->next=head;
        head=temp;
        
        curr=temp;
        prev=curr;
        
        while(curr->next!=NULL)
        { 
          if(curr->val==curr->next->val)                
            { 
             while(curr->next!=NULL && curr->val==curr->next->val)  
                curr=curr->next; 
                  
               prev->next=curr->next;      
             }
        else  prev=curr;
            
        if(curr->next!=NULL)    curr=curr->next;
        }
        return head->next;
    }
};