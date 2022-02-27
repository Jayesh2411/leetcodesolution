class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyFirst = INT_MAX , buySecond = INT_MAX;
        int sellFirst = 0, sellSecond = 0;
        for(int i : prices)
        {
            buyFirst = min(buyFirst, i);
            sellFirst = max(sellFirst, i - buyFirst);
            buySecond = min(buySecond, i - sellFirst);
            sellSecond = max(sellSecond, i - buySecond);
        }
        return sellSecond;
    }
};