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
        vector<int> result;
        while(k)
        {
            if(i >= 0 && j < arr.size() )
            {
                result.push_back( abs(x-arr[i]) > abs(x-arr[j])?arr[j++]:arr[i--] );
            }
            else if(i >= 0)
                result.push_back(arr[i--]);
            else
                result.push_back(arr[j++]);
            --k;
        }
        sort(result.begin(),result.end());
        return result;
    }
};