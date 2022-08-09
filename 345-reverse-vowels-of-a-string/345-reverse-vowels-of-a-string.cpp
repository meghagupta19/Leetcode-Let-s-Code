class Solution {
public:
    string reverseVowels(string s) {
        int l=0,h=s.size()-1;
        while(l<h)
        {
            if((isLowerCaseVowel(s[l]) || isUpperCaseVowel(s[l])) && 
               (isLowerCaseVowel(s[h]) || isUpperCaseVowel(s[h])) )
            {
                char a=s[l];
                s[l]=s[h];
                s[h]=a;
                l++;
                h--;
            }
            else if((isLowerCaseVowel(s[l]) || isUpperCaseVowel(s[l])) &&
                   (!isLowerCaseVowel(s[h]) && !isUpperCaseVowel(s[h])) )
                h--;
            else l++;
        }
        return s;
    }
    
    bool isLowerCaseVowel(char c)
    {
        return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');          
    }
    bool isUpperCaseVowel(char c)
    {
        return (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    } 
};