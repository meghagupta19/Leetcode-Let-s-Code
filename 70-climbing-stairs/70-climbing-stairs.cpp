class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2)
            return n;
        int a=1,b=2,c;
       for(int i=2;i<n;i++)
       {
           c=b+a;
           a=b;
           b=c;
            
       }
        return c;
    }
    
};

 