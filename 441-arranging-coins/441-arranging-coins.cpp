class Solution {
public:
    int arrangeCoins(int n) {
      for(long long i=1;i<=n;i++)
      {
          long long sum=(i*(i+1))/2;
          if(sum==n)
              return i;
          else if(sum>n)
              return i-1;
      }
        return 0;
    }
};