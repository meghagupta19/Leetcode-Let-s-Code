class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return false;
        int i=0;
        while(i+1<n)
        {
            if(arr[i]<arr[i+1])
              i++;
            else break;
        }
        if(i==0 || i==n-1)
            return false;
        while(i+1<n)
        {
            if(arr[i]>arr[i+1])
                i++;
            else break;
        }
        if(i==n-1)
            return true;
        else 
            return false;
    }
};