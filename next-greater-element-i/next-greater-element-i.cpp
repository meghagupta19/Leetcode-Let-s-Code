class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v; int j;
        for(int i=0;i<nums1.size();i++)
        {
            j=0;
            while(j<nums2.size()&&nums1[i]!=nums2[j])
                j++;
            if(j==nums2.size()-1)
                v.push_back(-1);
            else
            {
                while(j!=nums2.size())
                {
                    if(nums1[i]<nums2[j])
                    {
                        v.push_back(nums2[j]);
                        break;
                    }
                    j++;
                }
                
                if(j==nums2.size())
                    v.push_back(-1);
            }
            
        }
        return v;
    }
};