class Solution {
public:
    int fib(int n) {
        return fib_Series(n);
    }
    int fib_Series(int n)
    {
       if(n==0)
            return 0;
        else if(n==1)
            return 1;
        
        return fib_Series(n-1)+fib_Series(n-2); 
    }
};