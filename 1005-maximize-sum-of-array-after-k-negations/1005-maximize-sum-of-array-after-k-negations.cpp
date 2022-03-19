class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        while(k != 0 && nums[i] < 0 && i < nums.size())
        {
            nums[i] *= -1;
            ++i;
            --k;
        }
        if(k%2 == 0)
            return accumulate(nums.begin(),nums.end(),sum);
        else
        {
            sort(nums.begin(),nums.end());
            nums[0] *= -1;
            cout<<nums[0];
            return accumulate(nums.begin(),nums.end(),sum);
        }
    }
};