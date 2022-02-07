class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        map<int,string>mp2;
        
        string str="";
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;             
        }
        for(auto i:mp)
        {
           mp2[i.second]+=string(i.second,i.first);
        }
        for(auto i:mp2)
            str+=i.second;
        reverse(str.begin(),str.end());
        return str;
    }
};