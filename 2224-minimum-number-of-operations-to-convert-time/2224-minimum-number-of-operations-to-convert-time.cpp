class Solution {
public:
    int convertTime(string current, string correct) {
        vector<int>coins={1,5,15,60};
        int amount=((correct[0]*10)+correct[1])*60+(correct[3]*10)+correct[4];
        amount-=((current[0]*10)+current[1])*60+(current[3]*10)+current[4];
        
        int t[coins.size()+1][amount+1];
        int i,j;
        for(i=0;i<=coins.size();i++)
            t[i][0]=0;
        for(j=0;j<=amount;j++)
            t[0][j]=INT_MAX-1;
        for(i=1,j=1;j<=amount;j++)
        {
            if(j%coins[i-1]==0)
                t[i][j]=j/coins[i-1];
            else
                t[i][j]=INT_MAX-1;
        }
        for(i=2;i<=coins.size();i++)
            for(j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                    t[i][j]=min(t[i-1][j],1+t[i][j-coins[i-1]]);
                else
                    t[i][j]=t[i-1][j];
            }
        if(t[coins.size()][amount]>=INT_MAX-1)
            return -1;
        else
            return t[coins.size()][amount];
    }
};