class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            { 
              if(i>0 && flowerbed[i-1]==1)  continue;
              if(i+1<flowerbed.size() && flowerbed[i+1]==1) continue;
                
                flowerbed[i]=1;
                i++;
                n--;
            }
        }
        return n<=0;
    }
};