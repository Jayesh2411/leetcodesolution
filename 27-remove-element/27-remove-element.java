class Solution {
    public int removeElement(int[] nums, int val) {
       
        int in = 0;
        if (nums.length == 1 && nums[0] != val)
        {
            return 1;
        }
        boolean flag = true;
        for (int a =0 ;a<nums.length;a++) {
            if (nums[a] != val) {
                flag = false;
            }
        }
        if (flag) {
            nums = new int[0];
            return 0;
        }
        boolean found = false;
        for(int i =0;i<nums.length;i++) {
           
            if (nums[i] != val) {
                found = true;
                nums[in++] = nums[i];  
            }
            
        }
        if (found)
            return in;
        else
           return nums.length;
    }
}