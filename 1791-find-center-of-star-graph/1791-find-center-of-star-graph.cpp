class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        int arr[n+1];
        for(int i = 0; i <= n; i++)
            arr[i] = 0;
        for(auto a : edges)
        {
            for(auto x : a)
            {
                arr[x-1]++;
                if(arr[x-1] == n)
                    return x;
                    
            }
        }
        return arr[0];
    }
};