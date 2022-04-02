class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        int ans = INT_MIN, j = nums.size() - 1;
        int prevStart = 0;
        for(int i = 1; i <= j; i++)
        {
            ans = max(nums[i]-i+prevStart+nums[prevStart],ans);
            if(prevStart+nums[prevStart] < nums[i] + i)
                prevStart = i;
        }
        return ans;
    }
};