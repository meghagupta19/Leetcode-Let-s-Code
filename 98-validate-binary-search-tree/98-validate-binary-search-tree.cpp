/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* curr=root; 
        TreeNode* prev=NULL;
        stack<TreeNode*>s;
        
        while(s.empty()==false || curr!=NULL)
        {
            while(curr!=NULL)
            {
               s.push(curr);
               curr=curr->left;  
            }
            curr=s.top();
            if(prev!=NULL && curr->val<=prev->val) return false;
            prev=curr; 
            s.pop();
            curr=curr->right;
        }
        return true;
    }
};