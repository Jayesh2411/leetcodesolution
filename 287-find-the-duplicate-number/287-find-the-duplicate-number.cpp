class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while ( low <= high )
        {
            int mid = low + ( high - low )/2;
            int count = 0;
            for ( int i : nums )
                if ( i <= mid )
                    ++count;
            if ( count > mid )
                high = mid - 1;
            else
                low = mid + 1;
        }
            
        return low;
    }
};