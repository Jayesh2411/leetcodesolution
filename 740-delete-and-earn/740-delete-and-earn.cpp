class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> m;
        int maxEl = 0;
        int minEl = INT_MAX;
        for(int i: nums)
        {
            m[i]++;
            maxEl = max(maxEl,i);
            minEl = min(minEl,i);
        }
        int ans = 0, min1 = 0, min2 = 0;
        while( minEl <= maxEl )
        {
            if(m[minEl] != 0)
            {
                ans = max(minEl*m[minEl]+min2,min1);
                min2 = min1;
                min1 = ans;
            }
            else
                min2 = min1;
            ++minEl;
        }
        return ans;        
    }
};