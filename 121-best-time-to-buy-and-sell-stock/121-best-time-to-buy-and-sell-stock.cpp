class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,max_element=prices[prices.size()-1];
        
        for(int i=prices.size()-2;i>=0;i--)
        {
            while(max_element<prices[i] && i>0)
                max_element=prices[i];                  
            
            profit=max(profit,max_element-prices[i]);
        }
       return profit;
    }
};