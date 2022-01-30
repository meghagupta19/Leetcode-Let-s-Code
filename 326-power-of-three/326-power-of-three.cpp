class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n<=0)
           return false;
        if(n==1)
            return true;
        else{
            double x=log(n)/log(3);
            if(abs(x-round(x))<1e-10)
                return true;
        } 
        return false;
    }
};