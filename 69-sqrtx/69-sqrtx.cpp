class Solution {
public:
    int mySqrt(int x) {
        int mid,low,high,temp,ans;
        low = 1;
        high = x/2;
        if(x==0||x==1)
            return x;
        while(low<=high)
        {
            mid = (low+high)/2;
            temp=trunc(x/mid);
            if(temp==mid)
               return mid;
            else if(temp>mid) {
                low=mid+1;
                ans=mid;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};