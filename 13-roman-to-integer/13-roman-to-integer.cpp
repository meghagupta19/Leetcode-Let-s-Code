class Solution {
public:
    int romanToInt(string s) {
       int num=0,k;
        map<char,int>mp={{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size() && mp[s[i]]<mp[s[i+1]])
            {
                num+=mp[s[i+1]]-mp[s[i]];
                i++;
            }
            else num+=mp[s[i]];
            
        }
       return num; 
    }
};