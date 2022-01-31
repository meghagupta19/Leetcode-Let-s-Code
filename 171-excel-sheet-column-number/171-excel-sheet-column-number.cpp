class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long c=0;
        for(int i=0;i<columnTitle.size();i++)
        {
            c=((26*c)+columnTitle[i]-64);
        }
        return c;
    }
};