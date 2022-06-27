class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        int lis[n],lds[n];
        lis[0]=1;
        lds[n-1]=1;
        int sum=INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            lis[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    lis[i]=max(lis[i],1+lis[j]);
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            lds[i]=1;
            for(int j=n-1;j>i;j--)
            {
                if(nums[j]<nums[i])
                    lds[i]=max(lds[i],1+lds[j]);
            }
        }
        for(int i=1;i<n;i++)
        {
            if(lis[i]>1 && lds[i]>1)
            sum=max(sum,lis[i]+lds[i]-1);
        }
        return n-sum;
    }
};