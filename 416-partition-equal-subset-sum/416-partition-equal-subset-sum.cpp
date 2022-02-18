class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for ( int i : nums )
            sum += i;
        if(sum%2!=0)
            return false;
        bool curr[sum/2+1];
        curr[0]=true;
        for(int j = 1; j <= sum/2; j++)
        {
           curr[j]=false;
        }
        for(int i = 1; i <= nums.size(); i++)
        {
            for(int j = sum/2; j >= 1; j--)
            {
                if(nums[i-1] <= j)
                    curr[j] = curr[j] || curr[j-nums[i-1]];
            }
        }
        return curr[sum/2];
    }
};