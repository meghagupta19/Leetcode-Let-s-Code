class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int t[str1.size()+1][str2.size()+1];
        int i,j;
        for(i=0;i<=str1.size();i++)
            t[i][0]=0;
        for(j=0;j<=str2.size();j++)
            t[0][j]=0;
        
        for(i=1;i<=str1.size();i++)
            for(j=1;j<=str2.size();j++)
            {
                if(str1[i-1]==str2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        
        i=str1.size();
        j=str2.size();        
        string s="";
        
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                s.push_back(str1[i-1]);
                i--;
                j--;
            }
            else
            {
                if(t[i-1][j]>t[i][j-1])
                {
                    s.push_back(str1[i-1]);
                    i--;
                }
                else
                {
                    s.push_back(str2[j-1]);
                    j--;
                }
            }
        }
        
        while(i>0)
        {
            s.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            s.push_back(str2[j-1]);
            j--;
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};