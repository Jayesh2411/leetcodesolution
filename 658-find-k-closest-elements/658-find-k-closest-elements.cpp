class Solution {
    int findFloor(vector<int> arr,int x)
    {
        int low = 0 , high = arr.size() - 1;
        if( arr[high] <= x )
            return high;
        if( arr[0] >= x )
            return low;
        while(low <= high - 1)
        {
            int mid = low + (high - low)/2;
            if( arr[mid] == x  || (arr[mid] < x  && arr[mid+1] > x))
                return mid;
            if( arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return high;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = findFloor(arr,x);      
        int n = size(arr), R = i + 1, L = i;
        cout<<i;
        while(k--) 
            if(R >= n || L >= 0 && x - arr[L] <= arr[R] - x) L--;
            else R++;
        return vector<int>(begin(arr) + L + 1, begin(arr) + R);
    }
};