class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int t=0;t<n;t++)
        {
            for(int p=0;p<m;p++)
            {
                if(nums1[p]>nums2[t])
                    swap(nums1[p],nums2[t]);
            }
        }
        sort(nums2.begin(),nums2.end());
        for(int t=0;t<n;t++)
            nums1[m+t]=nums2[t];
    }
};