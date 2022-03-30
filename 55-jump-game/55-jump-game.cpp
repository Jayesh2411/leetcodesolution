class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1 || nums[0] >= nums.size() - 1)
            return true;
        int maxL = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(i <= maxL)
            {
                if(nums[i]+i > maxL)
                {
                    maxL = nums[i] + i;
                    if(maxL >= nums.size() - 1)
                        return true;
                }
            }
            else
                return false;
        }
        return false;
    }
};