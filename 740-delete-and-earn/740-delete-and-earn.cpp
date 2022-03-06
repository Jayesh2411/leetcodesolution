class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> m;
        for(int i: nums)
            m[i]++;
        int ans = 0, min1 = 0, min2 = 0, i = 1;
        int maxEl = *max_element(nums.begin(),nums.end());
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