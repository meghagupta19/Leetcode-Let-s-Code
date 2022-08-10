class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        unordered_map<char,int>mp;
        string a="qwertyuiopQWERTYUIOP", b="asdfghjklASDFGHJKL" ,c="zxcvbnmZXCVBNM";
        for(int i=0;i<a.size();i++)
          mp[a[i]]=1;
        for(int i=0;i<b.size();i++)
          mp[b[i]]=2;
        for(int i=0;i<c.size();i++)
          mp[c[i]]=3;
        
        for(int i=0;i<words.size();i++)
        {
           for(int j=0;j<words[i].size();j++)
           {
               if(j+1<words[i].size() && mp[words[i][j]]!=mp[words[i][j+1]])
                   break;
               if(j+1==words[i].size())
                   ans.push_back(words[i]);                   
           }
        }
        return ans;
    }
};