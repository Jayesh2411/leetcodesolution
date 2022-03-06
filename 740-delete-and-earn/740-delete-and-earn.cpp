class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> m;
        int maxEl = 0;
        for(int i: nums)
        {
            m[i]++;
            maxEl = max(maxEl,i);
        }
        int ans = 0, min1 = 0, min2 = 0, i = 1;
        while( i <= maxEl )
        {
            if(m[i] != 0)
            {
                ans = max(i*m[i]+min2,min1);
                min2 = min1;
                min1 = ans;
            }
            else
                min2 = min1;
            ++i;
        }
        return ans;        
    }
};