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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr=root;
        stack<TreeNode*>st;
        int count=0;
        while(st.empty()==false || curr!=NULL)
        {
            while(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            count++;
            if(count==k)
                return curr->val;
            st.pop();
            curr=curr->right;
        }
        return curr->val;
    }
};