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
    bool isSymmetric(TreeNode* root) {

        if(root==NULL) return true;
        
        TreeNode *ptr1=root->left,*ptr2=root->right;
        
        return sym(ptr1,ptr2);
    }
    
    bool sym(TreeNode* x,TreeNode* y)
    {       
        if(x==NULL && y==NULL) return true;
        else if(x!=NULL && y!=NULL && x->val==y->val)
            return (sym(x->left,y->right) && sym(x->right,y->left));
       else return false;
    }   
};