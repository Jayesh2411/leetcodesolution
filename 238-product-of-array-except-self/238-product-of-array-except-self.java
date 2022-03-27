class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product = 1;
        for (int i = 0;i<nums.length;i++) {
            product *= nums[i];
        }
        int newArr[] = new int[nums.length];
        for (int j=0;j<nums.length;j++) {
            if(nums[j] == 0) {
                int t = 1;
                for (int k=0;k<nums.length;k++) {
                    if (k== j) {
                        continue;
                    }
                    t *= nums[k];
                }
                newArr[j] = t;
                continue;
            }
            newArr[j] = product/nums[j];
        }
        
        return newArr;
    }
}