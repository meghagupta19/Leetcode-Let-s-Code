class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==1)
            return ;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-1;j++)
                if(nums[j+1]<nums[j])
                swap(nums[j+1],nums[j]);
        }
    }
};