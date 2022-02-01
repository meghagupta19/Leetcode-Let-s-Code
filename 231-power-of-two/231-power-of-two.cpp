class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n<0)
            return false;
        double c=log(n)/log(2);
        
        return (abs(c-round(c))<1e-10);
    }
};