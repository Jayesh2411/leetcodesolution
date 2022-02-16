class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for ( int i : nums )
            sum += i;
        if(sum%2!=0)
            return false;
        bool prev[sum/2+1],curr[sum/2+1];
        prev[0]=true;
        curr[0]=true;
        for(int j = 1; j <= sum/2; j++)
        {
           prev[j]=false;
        }
        for(int i = 1; i <= nums.size(); i++)
        {
            for(int j = 1; j <= sum/2; j++)
            {
                if(nums[i-1] <= j)
                    curr[j] = prev[j] || prev[j-nums[i-1]];
                else
                    curr[j] = prev[j];
            }
            copy(curr,curr+sum/2,prev);
        }
        return curr[sum/2];
        
            
    }
};