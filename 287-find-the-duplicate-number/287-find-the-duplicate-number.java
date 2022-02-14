class Solution {
public int findDuplicate(int[] nums) {
int x=0,n=nums.length;
Arrays.sort(nums);
for(int i=0;i<n-1;i++)
{
if(nums[i]==nums[i+1])
x=nums[i];
}
return x;
}
}