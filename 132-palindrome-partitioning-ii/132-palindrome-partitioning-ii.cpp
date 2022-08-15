class Solution {
public:
    int minCut(string s) {        
        vector<int>t (s.size(),-1);
        return solve(s,0,s.size()-1,t);
    }
    
    int solve(string &str, int i, int j, vector<int>&t)
    {
        if(i>=j)
            return 0;
        
        if(t[i]!=-1)
            return t[i];
        
        if(isPalindrome(str,i,j))
            return 0;
        
        int ans=INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            if(isPalindrome(str,i,k))
            
            ans = min(ans,1+solve(str,k+1,j,t));
        }
            
        return t[i]=ans;
    }
    
     bool isPalindrome(string &str,int i,int j)
     {
         while(i<j)
         {
             if(str[i]==str[j])
             {
                 i++;
                 j--;
             }
             else return false;
         }
         return true;
     }
};