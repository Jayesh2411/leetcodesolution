// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1 , high = n;
        if ( isBadVersion(1) == true )
            return 1;
        while( low <= high )
        {
            int mid = low + (high - low)/2;
            if( isBadVersion(mid) == true)
                if( isBadVersion(mid - 1) == true)
                    high = mid - 1;
                else
                    return mid;
            else
                low = mid + 1;
        }
        return -1;
        
    }
};