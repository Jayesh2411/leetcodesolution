class Solution {
    void permute(vector<int>& nums, int i, vector<vector<int>>& result)
    {
        if(nums.size()<=i)
            result.push_back(nums);
        for(int begin = i ; begin < nums.size() ; begin++)
        {
            swap(nums[i],nums[begin]);
            permute(nums,i+1,result);
            swap(nums[i],nums[begin]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permute(nums,0,result);
        return result;
    }
};