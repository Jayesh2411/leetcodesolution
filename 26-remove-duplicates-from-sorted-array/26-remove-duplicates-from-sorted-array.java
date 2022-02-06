class Solution {
  public int removeDuplicates(int[] nums) {
        Set<Integer> set = new HashSet();
        ArrayList<Integer> list = new ArrayList();

        for (int i = 0; i < nums.length; i++) {
            if (!set.contains(nums[i])) {
                set.add(nums[i]);
                list.add(nums[i]);
            } 
        }
        int i = 0;
        for (Integer l : list) {
            nums[i++] = l;
        }
        return list.size();
    }
}