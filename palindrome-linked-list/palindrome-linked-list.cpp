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
    bool isPalindrome(ListNode* head) {
        int x=count(head);
        int r=x/2;
        stack<int>s1,s2;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            s1.push(curr->val);
            curr=curr->next;
        }
        while(!s1.empty() && r--)
        {
            s2.push(s1.top());
            s1.pop();
        }
        if(x%2!=0)
            s1.pop();
        if(check(s1,s2,s1.size(),s2.size()))
            return true;
        else return false;
        
            
    }

   bool check(stack<int> s1, stack<int> s2, int l1, int l2)
  {   
    bool flag=true;    
    if(l1!=l2)
        return false;  
    else{
        while(flag && !s1.empty())
        {          
            int x1=s1.top();
            int x2=s2.top();
            
            if(x1!=x2)
                flag=false;
            
            s1.pop();
            s2.pop();
        }
    }

    if(flag)
        return true;    
    else
        return false;
   }
    
    int count(ListNode* head)
    {
        if(head==NULL)
            return 0;
        else return 1+count(head->next);
    }
};