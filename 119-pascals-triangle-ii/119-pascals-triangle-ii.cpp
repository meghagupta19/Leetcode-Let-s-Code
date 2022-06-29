class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>v;
       long long int n=1;
        v.push_back(n);
       for(int i=1;i<=rowIndex;i++)
       {
          n=n*(rowIndex-i+1)/i;
           v.push_back(n);
       }
        return v;
    }
};