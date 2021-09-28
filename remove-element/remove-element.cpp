class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r=0,j=nums.size()-1;        
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==val)
            {
                swap(nums[i],nums[j--]);
                r++;
            }
        }
               return nums.size()-r;
    }
};