class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0, i = 0, dist = 0, n = gas.size();
        while(start != n)
        {
            dist += gas[i] - cost[i];
            i = (i+1)%n;
            if(dist >= 0 && i == start)
                return start;
            while(dist < 0 && start != n)
            {
                dist += cost[start] - gas[start];
                ++start;
            }
        }
        return -1;
    }
};