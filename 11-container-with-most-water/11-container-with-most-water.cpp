class Solution {
public:
    int maxArea(vector<int>& height) {
        int h,w,i=0,j=height.size()-1;
        int area=0;
        while(i<j)
        {
            h=min(height[i],height[j]);
            w=j-i;
            area=max(area,h*w);
            if(height[i]<=height[j])
                i++;
            else j--;                                       
        }                
        return area;
    }
};