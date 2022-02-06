class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;
        int len = nums.size();
        if(len==0||len==1)
            return len;
        int duplicates = 0;
        for(int i=2;i<len;i++)
        {
            if(nums[i]!=nums[i-2-duplicates])
                nums[k++]=nums[i];
            else
                ++duplicates;
        }
        return k;
    }
};