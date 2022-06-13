// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       unsigned int l=1,h=n,m;
        while(l<=h)
        {
          m=(l+h)/2;
          if(isBadVersion(m)==false)
              l=m+1;
          else h=m;
          if(l==h)
              return l;
        }
        return l;
    }
};