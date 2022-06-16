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
    vector <int> postorder(Node* root) {
        vector<int>v;
        stack<Node*>s1;
        if(root==NULL)
            return v;
        s1.push(root);
        while(!s1.empty())
        {
           if(s1.top()->children.size()>0)
           {
               Node* curr=s1.top();
               for(int i=curr->children.size()-1; i>=0; i--)
               {
                  s1.push(curr->children[i]);
               }
               curr->children.clear();
           }
           else
           {
               v.push_back(s1.top()->val);
               s1.pop();
           }
        }
        return v;
    }
};