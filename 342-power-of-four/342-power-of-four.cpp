class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        else if(n>0 && ceil(log(n)/log(4))==floor(log(n)/log(4)))
            return true;
        else return false;
    }
};