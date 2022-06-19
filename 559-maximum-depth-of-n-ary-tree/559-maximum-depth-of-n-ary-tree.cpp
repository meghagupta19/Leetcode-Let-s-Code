/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
     if(root==NULL)
         return 0;
        queue<pair<Node*,int>>q;
        q.push({root,1});
        int max=0;
        
        while(!q.empty())
        {
            max=q.front().second;
            Node* curr=q.front().first;            
            q.pop();
            for(int i=0;i<curr->children.size();i++)
            {
               q.push({curr->children[i],max+1}); 
            }
            
        }
        return max;
    }
};