class Solution {
    public int maxProduct(int[] nums) {
        int maxProduct = Integer.MIN_VALUE;
        int currProduct = 1;
        for (int i =0;i<nums.length;i++) {
            currProduct *= nums[i];
            maxProduct = Math.max(currProduct, maxProduct);
            if (currProduct == 0) {
                currProduct = 1;
            }
        }
        currProduct = 1;
        for (int i = nums.length-1;i>=0;i--) {
            currProduct *= nums[i];
            maxProduct = Math.max(currProduct, maxProduct);
            if (currProduct == 0) {
                currProduct = 1;
            }
        }
        return maxProduct;
    }
}