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
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode* curr=root;
        TreeNode* temp=new TreeNode(NULL);
        TreeNode* t=temp;
        stack<TreeNode*>s;
        
        while(s.empty()==false || curr!=NULL)
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            temp->right=new TreeNode(curr->val);
            temp=temp->right;
            s.pop();
            curr=curr->right;
        }
        return t->right;
    }
};