class Solution {
public:
    int countSegments(string s) {
       int count=0;
        for(int i=0;i<s.size();i++)
        {
            int k=i;
            while(k<s.size() && s[k]==' ') k++;
            i=k;
            while(i<s.size() && s[i]!=' ')
                i++;
            if(i>0 && i!=k)
                count++;
            
        }
        return count;
    }
};