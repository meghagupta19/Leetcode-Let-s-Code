class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        
        if(nums.size()<4) 
            return v;
                
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
           for(int j=i+1;j<nums.size();j++) 
           {
               int k=j+1,l=nums.size()-1;
               int sum=target-nums[i]-nums[j];
               while(k<l)
               {
                   if(nums[k]+nums[l]==sum)
                   {
                       v.push_back({nums[i],nums[j],nums[k],nums[l]});
                       k++; l--;
                   }
                   else if(nums[k]+nums[l]>sum)
                       l--;
                   else k++;
               }
           }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()),v.end());
        return v;
    }
};