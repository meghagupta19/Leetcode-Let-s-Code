class Solution {
public:
    int twoEggDrop(int n) {
        int dp[n+1][3];
        for(int i=1;i<=n;i++)
        {
            dp[i][1]=i;
        }
        for(int j=1;j<=2;j++)
        {
            dp[0][j]=0;
            dp[1][j]=1;
        }
        for(int i=2;i<=n;i++)
        {
            dp[i][2]=INT_MAX;
            for(int x=1;x<=i;x++)
            {
                dp[i][2]=min(dp[i][2],1+max(dp[x-1][1],dp[i-x][2]));
            }
        }
        return dp[n][2];
    }
};