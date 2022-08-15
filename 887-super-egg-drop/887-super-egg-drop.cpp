class Solution {
public:
    int superEggDrop(int k, int n) {
        vector<vector<int>>t(k+1,vector<int>(n+1,-1));
        return solve(k,n,t);
    }
    int solve(int e, int f, vector<vector<int>> &t)
    {
        int ans=INT_MAX,l=0,h=f;
        if(f==1 || f==0)
            return f;
        if(e==1)
            return f;
        
        if(t[e][f]!=-1)
            return t[e][f];
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            int r=solve(e-1,mid-1,t);
            int s=solve(e,f-mid,t);
            if(r<s)
                l=mid+1;
            else h=mid-1;
            ans=min(ans,1+max(r,s));
        }
        return t[e][f]=ans;
    }
};