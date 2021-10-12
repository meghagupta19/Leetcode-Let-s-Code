class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int p=0;p<s.size();p++)
            if(isalpha(s[p])||isdigit(s[p]) )
                continue;
        else
            {
                s.erase(p,1);
                p--;
            }
        int j=s.size()-1,i=0;
        while(i<j)
        {
            if(tolower(s[i++])!=tolower(s[j--]))
               return false;
        }
        return true;
            
    }
};