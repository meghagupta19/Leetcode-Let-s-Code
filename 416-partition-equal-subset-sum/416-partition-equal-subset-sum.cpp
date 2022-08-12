class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        if(sum%2!=0)
            return false;
        
        sum=sum/2;
        
        vector<vector<bool>>t(nums.size()+1,vector<bool>(sum+1,0));
        t[0][0]=1;
        
        for(int i=1;i<=nums.size();i++)
            for(int j=0;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j]||t[i-1][j-nums[i-1]];
                else 
                    t[i][j]=t[i-1][j];
            }
         return t[nums.size()][sum];       
    }
};