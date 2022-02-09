class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        for(i=0;i<n-1;i++)
        {
           for(j=0;j<n-i-1;j++)
           {
               if(nums[j]>nums[j+1])
               {
                   swap(nums[j],nums[j+1]);
               }
           }
        }
    }
};