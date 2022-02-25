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
    int m=INT_MAX,r=INT_MIN;
    int getMinimumDifference(TreeNode* root) {
        if(root->left!=NULL)
           getMinimumDifference(root->left);
        if(r>=0)
            m=min(m,abs(root->val-r));
         r=root->val;
        if(root->right!=NULL)
           getMinimumDifference(root->right);
        return m;
    }
};