class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int s1=nums1.size(),s2=nums2.size();
        int temp=0;
        int i=0,j=0,ptr1=0,ptr2=0;
        
        while(temp<=(s1+s2)/2)
        {
            ptr1 = ptr2;
            ptr2 = (j>=s2||(i<s1 && nums1[i]<nums2[j])) ? nums1[i++] : nums2[j++];
            temp++;
        }
        
        if((s1+s2)%2==0)
        return double(ptr1+ptr2)/2;
        else return double(ptr2);       
          
    }
};

