class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int b=cost[n-1];
        int a=cost[n-2];
        int ans=min(a,b);
        for(int i=n-3;i>=-1;i--)
        {
            if(i!=-1)
                ans=cost[i]+min(a,b);
            else 
                ans=min(a,b);
            b=a;
            a=ans;
        }
        return ans;
    }
};