class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size() && nums[i]<0)
                i++;
        
        if(i==nums.size() || *min_element(nums.begin()+i,nums.end())>1)  return 1;
        
        while(i+1<nums.size() && (nums[i+1]==nums[i]+1 || nums[i+1]==nums[i]))
        i++;
        
        return nums[i]+1;
    }
};