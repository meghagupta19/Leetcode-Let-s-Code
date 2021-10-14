class Solution {
public:
    int myAtoi(string s) {
        
        int k=1,i=0;long long int ans=0; 
        if(s.empty())
            return 0;
        
        while(s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            k=-1; i++;
        }
        else if(s[i]=='+')
        {
            k=1; i++;
        }
        
        cout<<s[i]<<endl;
        for(;i<s.size();++i)
        {
            if(isdigit(s[i])==false)
                 break;                    
            else 
                 ans=ans*10+s[i]-'0';
            
            if(ans*k>INT_MAX)
                 return INT_MAX;
            else if(ans*k<INT_MIN)
                 return INT_MIN;
         }
        
        
        return k*ans;
    }
};