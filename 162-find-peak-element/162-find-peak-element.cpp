class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        if(nums[1]<nums[0])
            return 0;
        int low,high,mid,i;
        low = 1;
        high = nums.size()-1;
        if(nums[high]>nums[high-1])
            return high;
        while(low<=high)
        {
            mid = (low+high)/2;
            i=mid;
            if(nums[i-1]<nums[i])
            {
                if(nums[i+1]<nums[i])
                    return i;
                else
                    low=mid+1;
            }
            else
                high=mid-1;
        }
        return -1;
    }
};