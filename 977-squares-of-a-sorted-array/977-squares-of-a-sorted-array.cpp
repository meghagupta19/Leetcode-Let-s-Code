class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size());
        int i=0,j=nums.size()-1;
        for(int k=nums.size()-1;k>=0;)
        {
            if(abs(nums[j])<abs(nums[i]))                
            {
                v[k--]=nums[i]*nums[i];
                i++;
            }
            else 
            {
                v[k--]=nums[j]*nums[j];
                j--;
            }
        }
        
        return v;
    }
    
};