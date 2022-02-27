class Solution {
public:
    int findCenter(vector<vector<int>>& arr) {
        return arr[0][0] == arr[1][0]?arr[0][0]:arr[0][0]==arr[1][1]?arr[0][0]:arr[0][1];
    }
};