class Solution {
    int robber(vector<int>& nums, int l, int r)
    {
        int a = 0;
        int b = 0;
        for (int i=l; i<=r; i++)
        {
            if (i%2==0)
            {
                a = max(a+nums[i], b);
            }
            else
            {
                b = max(a, b+nums[i]);
            }
        }
        return max(a, b);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n < 3)
            return *max_element(nums.begin(),nums.end());
        return max(robber(nums,0,n-2),robber(nums,1,n-1));
    }
};