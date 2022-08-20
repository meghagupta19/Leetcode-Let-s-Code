class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int>s;
        int n=heights.size();
        vector<int>v(n,0);
        s.push(heights[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(s.empty())
                return v;
            while(!s.empty() && heights[i]>=s.top())
            {
                s.pop();
                v[i]+=1;
            }
            if(!s.empty() && heights[i]<s.top())
            {
                v[i]+=1;
            }
            s.push(heights[i]);
        }
        return v;
    }
};