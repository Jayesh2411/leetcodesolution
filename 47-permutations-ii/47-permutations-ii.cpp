class Solution {
    vector<vector<int>> result;
    void permute(vector<int> nums, vector<int> count, vector<int> local, int level, int n)
    {
        if(level==n)
        {
            result.push_back(local);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(count[i]>0)
            {
                count[i]--;
                local[level] = nums[i];
                permute(nums,count,local,level+1,n);
                count[i]++;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> local(nums.size(),0);
        map<int,int> m;
        for(int i : nums)
            m[i]++;
        vector<int> count;
        vector<int> num;
        for(auto i : m)
        {
            num.push_back(i.first);
            count.push_back(i.second);
        }
        permute(num,count,local,0, nums.size());
        return result;
    }
};