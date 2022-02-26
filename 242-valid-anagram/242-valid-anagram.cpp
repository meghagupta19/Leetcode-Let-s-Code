class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,int>mp;
        
        int i;
        for(i=0;i<s.size();i++)
            mp[s[i]]++;
        for(i=0;i<t.size();i++)
            mp[t[i]]--;
        
        for (auto c : mp)
            if(c.second>0)
                return false;
        
        return true;
    }
};