class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> temp = prices;
        sort(temp.begin(),temp.end(),greater<int>());
        if(temp==prices)
            return 0;
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