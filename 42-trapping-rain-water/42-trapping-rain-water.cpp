class Solution {
public:
    int trap(vector<int>& height) {
        
        vector<int>maxl(height.size()),maxr(height.size());
        maxl[0]=height[0];
        maxr[height.size()-1]=height[height.size()-1];
        int count=0;
        for(int i=1;i<height.size();i++)
        {
            maxl[i]=max(height[i],maxl[i-1]);
            cout<<maxl[i];
        }
        for(int i=height.size()-2;i>=0;i--)
        {
            maxr[i]=max(height[i],maxr[i+1]);
        }
        for(int i=1;i<height.size()-1;i++)
        {
            count+=min(maxl[i],maxr[i])-height[i];
        }
        
        return count;
    }
};