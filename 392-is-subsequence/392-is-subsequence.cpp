class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()) return false;
        int i,j;
        for(i=0,j=0;i<s.size(),j<t.size();j++)
        {
            if(s[i]==t[j])
                i++;
        }
        return i==s.size();
    }
};