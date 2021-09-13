class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {       
        vector<int>v;        
        for(int i=0;i<nums.size();i++)            
        {
          vector<int>::iterator it;
            it=find(nums.begin()+i+1, nums.end(), target-nums[i]);
            if(it!=nums.end())
                {
                   v.push_back(i);
                   v.push_back(it-nums.begin());
                    break;
                }                                  
        }        
        return v;        
    }    
};