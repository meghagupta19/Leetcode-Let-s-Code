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
    int findTilt(TreeNode* root) {
        int sum=0;
        subsum(root,sum);
        return sum;
    }
    
    int subsum(TreeNode* t,int &sum)
    {  
        if(t==NULL)
            return 0;
        int leftsum=subsum(t->left,sum);
        int rightsum=subsum(t->right,sum);
        sum+=abs(leftsum-rightsum);
        return (t->val+leftsum+rightsum);
    }
    
};