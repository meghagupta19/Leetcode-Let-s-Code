class Solution {
public:
    bool checkPerfectNumber(int num) {
        int k=num;
        for(int i=1;i<=num/2;i++)
            if(num%i==0)
                k-=i;
        return k==0;
    }
};