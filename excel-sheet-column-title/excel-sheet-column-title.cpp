class Solution {
public:
    string convertToTitle(int columnNumber) {
    string s; 
    long long int t=columnNumber;  
     while(t)
     {
        if(t<=26)
        {
            s.push_back(char(t+64));
            break;
        }
        else 
        {
           int d=t%26; 
           s.push_back(char((d+25)%26+65));
           if(d==0)
             t=(t/26)-1;
           else
             t=t/26;              
        }
     }
        reverse(s.begin(),s.end());
        return s;
    }
};