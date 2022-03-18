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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>s1,s2;
        vector<vector<int>>v1;
        vector<int>v2;
        if(root==NULL)
            return v1;
        s1.push(root);
        while(s1.empty()==false||s2.empty()==false)
        {
            while(s1.empty()==false)
            {
                v2.push_back(s1.top()->val);
                if(s1.top()->left!=NULL)
                s2.push(s1.top()->left);
                if(s1.top()->right!=NULL)
                s2.push(s1.top()->right);
                s1.pop();
            }
            if(v2.empty()==false)
            v1.push_back(v2);
            v2.clear();
            while(s2.empty()==false)
            {
                v2.push_back(s2.top()->val);
                if(s2.top()->right!=NULL)
                s1.push(s2.top()->right);
                if(s2.top()->left!=NULL)
                s1.push(s2.top()->left);
                s2.pop();
            }
            if(v2.empty()==false)
            v1.push_back(v2);
            v2.clear();
        }
        return v1;
    }
};