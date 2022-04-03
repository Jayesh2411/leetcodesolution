class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        for(int i = 0; i < tickets.size(); i++)
            ans += i > k?min(tickets[k]-1,tickets[i]):min(tickets[k],tickets[i]);
        return ans;
    }
};