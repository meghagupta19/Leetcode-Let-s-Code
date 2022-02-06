class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        vector<int>v(temperatures.size(),0);        
        st.push(0);
        for(int i=1;i<temperatures.size();i++)
        {
            while(st.empty()==false && temperatures[st.top()]<temperatures[i])
            {
              if(st.empty()==false)  
              v[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};
