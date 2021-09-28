class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;        
        for(int i=0;i<numbers.size();i++)            
        {
          vector<int>::iterator it;
            it=find(numbers.begin()+i+1, numbers.end(), target-numbers[i]);
            if(it!=numbers.end())
                {
                   v.push_back(i+1);
                   v.push_back(it-numbers.begin()+1);
                    break;
                }                                  
        }        
        return v;   
    }
};