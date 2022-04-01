class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        int ans = 0;
        int i = 0;
        while(i < nums.size() - 2)
        {
            int temp = i;
            while(temp < nums.size() - 1 && nums[temp+1]-nums[temp] == nums[i+1]-nums[i])
                ++temp;
            if(temp != i+1)
            {
                ans += (temp-i)*(temp-i-1)/2;
            }
            i = temp;
        }
        return ans;
    }
};