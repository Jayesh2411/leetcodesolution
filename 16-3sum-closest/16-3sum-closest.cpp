class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = 10000000;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 2; i++)
        {            
            for(int j = i + 1; j < nums.size() - 1; j++)
            {
                int temp = 1000000;
                int k = nums.size() - 1;
                while(j < k)
                {
                    if(abs(target-temp) >= abs(nums[i]+nums[j]+nums[k]-target))
                        temp = nums[i]+nums[j]+nums[k];
                    else
                        break;
                    --k;
                }
                if(abs(target-ans) > abs(target-temp))
                {
                    ans = temp;
                    if(ans == target)
                        return target;
                }
            }
        }
        return ans;
    }
};