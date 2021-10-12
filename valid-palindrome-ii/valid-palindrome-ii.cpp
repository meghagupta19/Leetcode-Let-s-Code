class Solution {
public:
    bool check(string s, int i, int j) {
        
        while(i<j)
        {
            if(tolower(s[i++])!=tolower(s[j--]))
            return false;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int j=s.size()-1,i=0;
        while(i<j)
        {       
            
            if(tolower(s[i])!=tolower(s[j]))
            {  
                  return check(s,i+1,j)||check(s,i,j-1);                
            }
            else
            {
                i++; j--;
            }
        }

        return true;
    }
    
};