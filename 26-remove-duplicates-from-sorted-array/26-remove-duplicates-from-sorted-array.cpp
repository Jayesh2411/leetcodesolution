class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int len = nums.size();
        if(len==0)
            return len;
        for(int i=1;i<len;i++)
        {
            if(nums[i]!=nums[i-1])
                nums[k++]=nums[i];
        }
        return k;
    }
};