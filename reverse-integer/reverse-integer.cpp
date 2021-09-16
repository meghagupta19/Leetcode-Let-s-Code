class Solution {
public:
    int reverse(int x) {
     long long int y,n=0;        
        {
            while(x!=0)
           {
            y=x%10; 
            if(n<INT_MIN/10||n>INT_MAX/10)
                return 0;
            n=n*10+y; 
            x=x/10;
           }
            return n;
            
        }
        
    }
};

    