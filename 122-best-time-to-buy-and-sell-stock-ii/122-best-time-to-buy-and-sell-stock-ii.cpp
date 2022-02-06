class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i,buy,profit=0,bought=0;
        for(i=0;i<prices.size()-1;i++)
        {
            if(bought==0)
            {
                if(prices[i+1]>prices[i])
                {
                    bought=1;
                    buy=prices[i];
                }
            }
            else
            {
                if(prices[i+1]<prices[i])
                {
                    profit = profit + prices[i]-buy;
                    bought=0;
                }
            }
        }
        if(bought==1)
            profit=profit+prices[i]-buy;
        return profit;
    }
};