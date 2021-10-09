class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>a,b; 
        if(s1.size()>s2.size())
            return false;
        
        for(int i=0;i<s1.size();i++)
        {
            a[s1[i]]++;
            b[s2[i]]++;
        }
        
        if(a==b) 
            return true;
        
        for(int i=s1.size();i<s2.size();i++)
        {
            
            if(b[s2[i-s1.size()]] == 1)
                b.erase(s2[i-s1.size()]);
            else b[s2[i-s1.size()]]--;
                b[s2[i]]++;
            if(a==b)
                return true;
                                        
        }
        return false;
        
    }
};