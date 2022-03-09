class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans = (long long)k*(k+1)/2, last = 0;
        make_heap(nums.begin(),nums.end(),greater<int>());
        while (!nums.empty() && nums.front() <= k) {
        int n = nums.front();
        pop_heap(begin(nums), end(nums), greater<int>()); nums.pop_back();
        if (n != last) 
            ans += (++k) - n;
        last = n;
        }
        return ans;
    }
};