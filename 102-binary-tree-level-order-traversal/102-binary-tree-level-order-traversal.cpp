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
    vector<int>v;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v1;
        int h=height(root);
        for(int i=0;i<h;i++)
        {
            level(root,i);
            v1.push_back(v);
            v.clear();
        }
        return v1;
    }
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void level(TreeNode* r,int l)
    {
        if(r==NULL) return;
        if(l==0)
            v.push_back(r->val);
        level(r->left,l-1);
        level(r->right,l-1);
    }
};