class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int>t(target+1,0);
        t[0]=1;
        
        for(int i=1;i<=target;i++)
            for(int j=0;j<nums.size();j++)
            {
                if(i-nums[j]>=0)
                    t[i]+=t[i-nums[j]];
            }
        return t[target];
    }
};