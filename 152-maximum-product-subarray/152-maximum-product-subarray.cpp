class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1;
        int maxProd = nums[0];
        int maxP,minP;
        maxP = nums[0];
        minP = nums[0];
        for( int i = 1; i < nums.size(); i++)
        {
            if(nums[i]<0)
                swap(maxP,minP);
            maxP = max(nums[i]*maxP,nums[i]);
            minP = min(nums[i]*minP,nums[i]);
            maxProd = max(maxP,maxProd);
        }
        return maxProd;
    }
};