class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr=0;
        
        if(nums.empty()||nums.size()==1) return nums.size();
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[ptr]!=nums[i])
              nums[++ptr]=nums[i];                        
        }
        
        return ptr+1;
    }
};

