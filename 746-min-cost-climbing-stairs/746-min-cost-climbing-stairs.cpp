class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 2)
            return min(cost[0],cost[1]);
        int oneStep = cost[0];
        int twoStep = cost[1];
        for(int i = 2; i < n; i++)
        {
            int ans = min(oneStep,twoStep) + cost[i];
            oneStep = twoStep;
            twoStep = ans;
        }
        return min(oneStep,twoStep);
    }
};