class Solution {
public:
    int firstUniqChar(string s) {
       for(int i=0;i<s.size();i++)
       {
           if(s.find(s[i])!=string::npos && s.find(s[i],s.find(s[i])+1)!=string::npos)
             continue;
        else  return i;
       }
        return -1;
    }
};