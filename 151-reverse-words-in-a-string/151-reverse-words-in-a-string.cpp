class Solution {
public:
    string reverseWords(string s) {
        string str="";
        for(int i=0;i<s.size();i++)
        {            
            while(i<s.size() && s[i]==' ') 
                i++;
            int k=i;
            while(i<s.size() && s[i]!=' ') 
                i++;
            reverse(s.begin()+k,s.begin()+i);
        }
        reverse(s.begin(),s.end());
        
        for(int i=0;i<s.size();)
        {
            while(i<s.size() && s[i]==' ') 
                i++;
            while(i<s.size() && s[i]!=' ') 
            {
                str+=s[i];
                i++;
            }
            while(i<s.size() && s[i]==' ') 
                i++;
            if(i<s.size()) str+=" ";
        }
        return str;
    }
};