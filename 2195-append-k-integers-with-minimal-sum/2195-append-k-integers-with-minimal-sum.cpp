class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = (long long)k*(k+1)/2;
        set<int> s(nums.begin(),nums.end());
        for(int n : s)
            if(n <= k)
                ans += (++k) - n;
        return ans;
    }
};