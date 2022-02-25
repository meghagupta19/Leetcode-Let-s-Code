class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int c=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto i:mp)
        {
            if(k==0 && i.second>1)
                c++;
            else if(k!=0 && mp.find(i.first+k)!=mp.end())
                c++;
        }
        return c;
    }
};