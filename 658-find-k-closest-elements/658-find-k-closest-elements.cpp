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
        int j = i + 1;
        while(k)
        {
            if(i >= 0 && j < arr.size() )
            {
                abs(x-arr[i]) > abs(x-arr[j])?j++:i--;
            }
            else if(i >= 0)
                --i;
            else
                ++j;
            --k;
        }
        vector<int> result(arr.begin()+i+1,arr.begin()+j);
        return result;
        
    }
};