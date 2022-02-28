class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,r=arr.size()-1, m;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(arr[m]>arr[m+1])
            r=m;
            else l=m+1;
        }
        return l; 
    }
};

