class Solution {
public:
    int maxPower(string s) {
        int count=1,max_count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1]) 
                count++;
            else count=1;
            if(count>max_count)
                max_count=count;
        }
        return max_count;        
    }    
};