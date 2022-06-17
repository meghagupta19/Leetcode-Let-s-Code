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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        queue<TreeNode*>q;
        double sum,average;
        q.push(root);
        while(!q.empty())
        {
          sum=0;
          int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q.front();
                sum+=temp->val;
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            average=sum/n;
            v.push_back(average);
        }
        return v;
    }
};