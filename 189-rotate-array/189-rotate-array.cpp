class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if( k == 0 || k == nums.size() || nums.size() < 2 )
            return;
        unordered_set<int> s;
        int n = nums.size();
        for(int i = 0; s.size() != n ; i++)
        {
            int tempVal = nums[i];
            int currK = (i+k)%n;
            while(s.find(currK) == s.end())
            {
                s.insert(currK);
                int hold = nums[currK];
                nums[currK] = tempVal;
                tempVal = hold;
                currK = (currK+k)%n;
            }
        }
    }
};