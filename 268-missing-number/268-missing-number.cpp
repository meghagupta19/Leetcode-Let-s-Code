class Solution {
public:
    int missingNumber(vector<int>& nums) {        
        long long sum=0; int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum==(n*(n+1))/2)
            return 0;
        else return ((n*(n+1))/2)-sum;
    }
    
    
};