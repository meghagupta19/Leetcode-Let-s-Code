class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<2)
            return n;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        int m=1;
        for(int i=1;i<=(n-1)/2;i++)
        {            
            dp[2*i]=dp[i];
            dp[(2*i)+1]=dp[i]+dp[i+1];
            m=max(m,max(dp[2*i],dp[2*i+1]));
        }
        return m;
        
    }
};