class Solution {
public:
    int mySqrt(int x) {
        int mid,low,high,temp,ans;
        low = 1;
        high = x/2;
        ans=x;
        while(low<=high)
        {
            mid = (low+high)/2;
            if((trunc(x/mid))==mid)
               return mid;
            else if((trunc(x/mid))>mid) {
                low=mid+1;
                ans=mid;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};