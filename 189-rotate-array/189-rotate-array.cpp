class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if( k == 0 || k == nums.size() || nums.size() < 2 )
            return;
        int n = nums.size();
        int i = 0;
        int count = 0;
        int hold,currK,temp;
        while(count != n)
        {
            hold = nums[i];
            currK = i;
            do
            {
                temp = (currK+k)%n;
                swap(hold,nums[temp]);
                ++count;
                currK = temp;
            }while(currK != i);
            ++i;
        }
    }
};