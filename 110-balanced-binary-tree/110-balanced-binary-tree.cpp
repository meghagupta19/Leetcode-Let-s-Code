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
    bool isBalanced(TreeNode* root) {
        TreeNode* curr=root;
        stack<TreeNode*>st;
        while(st.empty()==false || curr!=NULL)
        {
            while(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            if(abs(height(curr->left)-height(curr->right))>1)
                return false;
            st.pop();
            curr=curr->right;
        }
        return true;
    }
    
    int height(TreeNode *r)
    {
        if(r==NULL)
            return 0;
        else return max(height(r->right),height(r->left))+1; 
    }
};