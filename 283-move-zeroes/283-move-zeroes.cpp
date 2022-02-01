class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size()==1)
            return;
        
        int ptr1=0,ptr2=1;
        while(ptr1<nums.size() && ptr2<nums.size())
        {
            if(nums[ptr1]==0 && nums[ptr2]!=0)
            {               
               swap(nums[ptr1],nums[ptr2]);
               ptr1++;                                    
            }
            else if(nums[ptr1]!=0) 
                ptr1++;
            
            ptr2++;
        }
    }
};