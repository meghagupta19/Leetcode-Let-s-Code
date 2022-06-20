/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        if(root==p || root==q)
            return root;
        TreeNode* LCA_left=lowestCommonAncestor(root->left, p, q);
        TreeNode* LCA_right=lowestCommonAncestor(root->right, p, q);
        
        if(LCA_left !=NULL && LCA_right!=NULL)
            return root;
        if(LCA_left) return LCA_left;
        else if(LCA_right) return LCA_right;
        else return NULL;
        
    }
};