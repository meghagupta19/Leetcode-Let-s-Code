class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        stack<char>s2; int k=0;
        
        for(int i=0;i<s.size();i++)
            st.push(s[i]);
        
        if(s.size()%2!=0) 
            return false;
        else
        while(!st.empty())
        {
            if( st.top() == ']' || st.top() == '}' || st.top() == ')' )
            {
                s2.push(st.top());
                st.pop();                
            } 
            else if( !s2.empty() && !st.empty() && ( ( st.top() == '[' && s2.top() == ']' )||
                    ( st.top() == '{' && s2.top() == '}' )||                                                               ( st.top() == '(' && s2.top() == ')' ) ) )
            {
                st.pop(); 
                s2.pop();
            } 
            else {k=1; break;}
        }
        if(k==0 && s2.empty() && st.empty())
        return true;
        else return false;
    }
    
};