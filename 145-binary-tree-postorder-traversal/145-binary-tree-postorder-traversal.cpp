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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s1,s2;
        vector<int>v;
        if(root==NULL)
            return v;
        s1.push(root);
        
        while(s1.empty()==false)
        {
            s2.push(s1.top());
            s1.pop();
            if(s2.top()->left!=NULL)
            s1.push(s2.top()->left);
            if(s2.top()->right!=NULL)
            s1.push(s2.top()->right);                
        }
        while(s2.empty()==NULL)
        {
            v.push_back(s2.top()->val);
            s2.pop();
        }
        return v;
    }
};
 
         
        