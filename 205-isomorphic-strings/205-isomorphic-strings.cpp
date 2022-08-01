class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,int>s1,s2;
        for(int i=0;i<s.size();i++)
        {
            s1[s[i]]=i+1;
            s2[t[i]]=i+1;
            cout<<s1[s[i]]<<s2[t[i]]<<endl;
        }
        for(int i=0;i<s.size();i++)
        {
            cout<<s1[s[i]]<<s2[t[i]]<<endl;
            if(s1[s[i]]!=s2[t[i]])
                return false;
        }
        return true;
    }
};