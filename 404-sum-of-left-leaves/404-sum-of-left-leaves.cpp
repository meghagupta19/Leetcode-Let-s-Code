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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        stack<TreeNode*>st;
        TreeNode* curr=root;
        while(st.empty()==false || curr!=NULL)
        {
            while(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
                if(curr!=NULL && curr->left==NULL && curr->right==NULL)
                sum+=curr->val;
            }
            curr=st.top();
            st.pop();
            curr=curr->right;
        }
        return sum;
    }
};