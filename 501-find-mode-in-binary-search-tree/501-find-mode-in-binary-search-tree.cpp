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
    vector<int> findMode(TreeNode* root) {
    stack<TreeNode*>st;
    int m=0; 
    map<int,int>mp;
    vector<int>ans;
    TreeNode*curr = root;
    while(curr!=NULL || st.empty()==false)
    {
       while(curr!=NULL)
       {
           st.push(curr);
           curr=curr->left;
       }
        curr=st.top();
        mp[curr->val]++;
        m=max(m,mp[curr->val]);
        st.pop();        
        curr=curr->right;
    }
        for(auto i:mp)
        {
          if(i.second==m)
              ans.push_back(i.first);
        }
        return ans;
    }
};