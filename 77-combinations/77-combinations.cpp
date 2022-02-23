/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
    vector<vector<int>> result;
    void combine(vector<int> nums, int start, int k)
    {
        if(nums.size()==k)
        {
            result.push_back(nums);
            return;
        }
        if(start == nums.size() )
            return;
        combine(nums,start+1,k);
        nums.erase(nums.begin()+start);
        if(nums.size() >= k)
            combine(nums,start,k);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> local;
        for(int i = 1; i <= n; i++)
            local.push_back(i);
        combine(local,0,k);
        return result;
    }
};
// @lc code=end

