class Solution {
public:
    bool isPerfectSquare(int num) {
        double x=pow(num,0.5);
        if(ceil(x)==floor(x))
            return true; 
        return false;
    }
};