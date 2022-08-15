class Solution {
public:
    unordered_map<string,bool>mp;
    bool isScramble(string s1, string s2) {        
        if(s1==s2)
            return true;
        if(s1.length()<=1)
            return false;
        
        string a=s1;
        a.push_back(' ');
        a+=s2;
        if(mp.find(a)!=mp.end())
            return mp[a];
        
       int n=s1.size();
       bool flag=false;
        for(int i=1;i<s1.size();i++)
        {
           bool x=isScramble(s1.substr(0,i),s2.substr(n-i,i)) &&                                     isScramble(s1.substr(i,n-i),s2.substr(0,n-i));
           bool y= isScramble(s1.substr(0,i),s2.substr(0,i)) &&                                      isScramble(s1.substr(i,n-i),s2.substr(i,n-i));        
           if(x||y)
                   {
                       flag=true;
                       break;
                   }        
        }
           return mp[a]=flag;        
    }

};