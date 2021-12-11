class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        
        if(nums.size()<3) 
            return v;
        else if(nums.size()==3) 
        {
            if(nums[0]+nums[1]+nums[2]==0) 
            {
                v.push_back({nums[0],nums[1],nums[2]});
                return v;
            }
            else return v;
        }
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {  
           if(nums[i]>0) break;
           if(i>0 && nums[i]==nums[i-1]) continue;
            
           int j=i+1,k=nums.size()-1;
           while(j<k)
           { 
             if(nums[j]+nums[k]+nums[i]==0)
             {
                v.push_back({nums[i],nums[j],nums[k]});
                 int j1=nums[j],k1=nums[k];
                while(j<k && nums[j]==j1) j++;
                while(j<k && nums[k]==k1) k--;
             }
             else if(nums[j]+nums[k]+nums[i]<0)
                  j++; 
             else k--;                   
           }
        }
        return v;
    }
};
