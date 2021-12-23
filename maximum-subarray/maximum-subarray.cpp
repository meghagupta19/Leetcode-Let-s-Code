class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx_sum=INT_MIN,sum=0,m=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mx_sum=max(sum,mx_sum);
            if(sum<0) sum=0;            
        }
        return mx_sum;
    }
};