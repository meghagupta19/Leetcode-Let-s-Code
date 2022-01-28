class Solution {
public:
    double myPow(double x, int n) {
        
            if(n==0)
                return 1;
            if(x==1)
                return x;
            
            if(n<0)
            {
                n=abs(n); 
                x=1/x;              
            }
            if(n%2==0)
                return pow(x*x,n/2);
            else return x*pow(x*x,n/2);
    }

};