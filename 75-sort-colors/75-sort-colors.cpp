class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        bool swaps=false;
        for(i=0;i<n-1;i++)
        {
            swaps=false;
           for(j=0;j<n-i-1;j++)
           {
               if(nums[j]>nums[j+1])
               {
                   swap(nums[j],nums[j+1]);
                   swaps=true;
               }
           }
            if(!swaps)
                break;
        }
    }
};