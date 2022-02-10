class Solution {
public:
    string reverseStr(string s, int k) {
       for(int i=0;i<s.size();)
       {
           if(s.size()-i>=2*k)
           {
               reverse(s.begin()+i,s.begin()+i+k);
               i=i+(2*k);
           }
           else if(s.size()-i<k)
           {
               reverse(s.begin()+i,s.end());
              return s;
           }
           else 
           {
              reverse(s.begin()+i,s.begin()+i+k);
               return s;
           }
       }
        return s; 
    }
};