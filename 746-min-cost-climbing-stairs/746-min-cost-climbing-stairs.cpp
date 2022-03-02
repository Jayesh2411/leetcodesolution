class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int tc[n];
        if(n == 2)
            return min(cost[0],cost[1]);
        tc[0] = cost[0];
        tc[1] = cost[1];
        for(int i = 2; i < n; i++)
        {
            tc[i] = min(tc[i-1],tc[i-2]) + cost[i];
        }
        return min(tc[n-1],tc[n-2]);
    }
};