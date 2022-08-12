class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];   
        
        if((sum+target)%2!=0 || target>sum)
            return 0;
        int s=abs(sum+target)/2;
        
        vector<vector<int>>t(nums.size()+1,vector<int>(s+1,0));  
        
        for(int i=0;i<=nums.size();i++)
            t[i][0]=1;
        
        for(int i=1;i<=nums.size();i++)
            for(int j=0;j<=s;j++)
            {
                if(nums[i-1]<=j)
                {
                    t[i][j]=t[i-1][j]+t[i-1][j-nums[i-1]];
                }
                else t[i][j]=t[i-1][j];
            }
        return t[nums.size()][s];
    }
};