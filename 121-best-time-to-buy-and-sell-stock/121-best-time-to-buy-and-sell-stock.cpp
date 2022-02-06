class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pist,buy=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(buy>prices[i])
                buy=prices[i];
            pist=prices[i]-buy;
            if(pist>profit)
                profit=pist;
        }
        return profit;
    }
};