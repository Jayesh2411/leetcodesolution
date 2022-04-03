class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        queue<int> q;
        for(int i = 0; i < tickets.size(); i++)
            q.push(i);
        while(tickets[k] != 0)
        {
            if(tickets[q.front()] > 0)
            {
                tickets[q.front()]--;
                ++ans;
                q.push(q.front());
            }            
            q.pop();
        }
        return ans;
    }
};