class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        int ans = 0;
        vector<int> diff(nums.size()-1);
        for(int i = 0; i < nums.size()-1; i++)
        {
            diff[i] = nums[i+1]-nums[i];
        }
        int i = 0;
        while(i < nums.size() - 2)
        {
            int temp = i;
            while(temp < nums.size() - 1 && diff[temp] == diff[i])
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