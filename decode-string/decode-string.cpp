class Solution {
public:
    string decodeString(string s) {
        
         size_t found = s.find(']');  //check if brackets are present
            if (found == string::npos)
                return s;
        for(int i=0;i<s.size();++i)
        {
            string a,b;
            while(s[i] != ']')
            i++;
            
            
            int x=i;
            while (s[x] != '[')  //s[x]='[' and s[i]=']'
              x--;
            
           a.append(s.substr(x+1,i-(x+1)));  // string a = bc
            
            int y=x;
            
          while(y-1>=0 && s[y-1]>='0'&& s[y-1]<='9')  // finding number of multiple digits
               y--;
           
           int r = stoi(s.substr(y,y-x));   //converting number into string
            
           while(r--) 
               b+=a;                 // sorted our first bracket 2[bc] = bcbc = string b
            
            s.erase(y,i-(y-1));
            s.insert(y,b);         //insert bcbc in original string
            
            
            size_t found = s.find(']');  //check if all brackets are removed
            if (found != string::npos)
                i=0;
            else break;
            
        }
        return s;
    }
};