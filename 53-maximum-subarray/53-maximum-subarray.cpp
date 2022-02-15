class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        for(int i : nums)
        {
            sum = sum + i;
            if(sum > maxSum)
                maxSum = sum;
            if(sum < 0)
                    sum = 0;
        }
        return maxSum;
    }
};