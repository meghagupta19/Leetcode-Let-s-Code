class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int c=0;c<t.size();c++)
            if(t[c]!=s[c])
                return t[c];
        return ' ';
    }
};