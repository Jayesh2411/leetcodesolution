class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0, curr = 0;
        while(tickets[k] != 0)
        {
            if(tickets[curr] > 0)
            {
                tickets[curr]--;
                ++ans;
            }            
            curr = (curr+1)%tickets.size();
        }
        return ans;
    }
};