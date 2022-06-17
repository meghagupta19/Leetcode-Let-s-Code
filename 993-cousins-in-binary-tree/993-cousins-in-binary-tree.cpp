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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        int c;
        q.push(root);
        while(!q.empty())
        {
            c=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
               TreeNode* temp=q.front();
               q.pop();
               if(temp->val==x || temp->val==y)
                   c++;
               if(temp->left!=NULL && temp->right!=NULL)
               {
                   if((temp->left->val==x && temp->right->val==y)||(temp->right->val==x && temp->left->val==y))
                       return false;
               }
                    
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
            }
            if(c==2) return true;
        }
        return c==2;
    }
};