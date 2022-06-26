class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            dp[i]=INT_MAX;
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    int ans=dp[i-coins[j]];
                    if(ans!=INT_MAX)
                       dp[i]=min(dp[i],1+ans);
                }
            }
        }
        return dp[amount]!=INT_MAX?dp[amount]:-1;
    }
};