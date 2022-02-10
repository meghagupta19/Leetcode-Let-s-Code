class Solution {
public:
    string longestPalindrome(string s) {

        if(s.size()==1)
            return s;

        int ptr1=0,ptr2=0;
        
        for(int i=0;i<s.size();i++)
        {
            int t=max(palindrome(s,i,i),palindrome(s,i,i+1));
            if(t>ptr2-ptr1)
            {
                ptr1 = i-(t-1)/2;
                ptr2 = i+t/2;
            }
                
        }
        return s.substr(ptr1,ptr2-ptr1+1);
    }
    
    int palindrome(string s,int l,int r)
    {
        while(l>=0 && r<s.size() && s[l]==s[r])
        {
            l--;
            r++;
        }
        return r-l-1;
    }
};