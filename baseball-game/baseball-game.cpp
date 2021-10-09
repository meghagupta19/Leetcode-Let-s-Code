class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        int p,q,count=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
                s.push(2*s.top());
            else if(ops[i]=="+")
            {
                p=s.top();
                s.pop();
                q=s.top()+p;
                s.push(p);
                s.push(q);                
            }
            else s.push(stoi(ops[i]));  //stoi converts "5" into 5(string into int)
        }
        while(!s.empty())
        {
            count+=s.top();
            s.pop();
        }
        return count;
    }
};