class Solution {
public:
    int dp[501][501];
    int minDistance(string word1, string word2) {
        return ed(word1, word2, word1.size(), word2.size());
    }
    int ed(string s1, string s2, int m, int n)
    {
        for(int i=0;i<=m;i++)
            dp[i][0]=i;
        for(int j=0;j<=n;j++)
            dp[0][j]=j;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                   dp[i][j]=dp[i-1][j-1];
                else 
                    dp[i][j]=1+ min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));               
            }
        return dp[m][n];
    }
};