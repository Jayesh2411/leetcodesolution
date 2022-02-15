class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        if ( target > nums[high] )
            return high + 1;
        else if ( target < nums[0] )
            return 0;
        int low = 0;
        while( low <= high )
        {
            int mid = low + (high - low)/2;
            if ( nums[mid] == target || ( nums[mid] > target && nums[mid-1] < target ) )
                return mid;
            if ( nums[mid] < target )
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};