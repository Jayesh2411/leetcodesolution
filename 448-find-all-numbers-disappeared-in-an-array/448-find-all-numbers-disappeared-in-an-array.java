class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        List<Integer> list = new ArrayList<>();
        HashSet<Integer> set = new HashSet<>();
        for(int i =1;i<=nums.length;i++) {
            set.add(i);
        }
        
        for (int i = 0;i<nums.length;i++) {
            set.remove(nums[i]);
        }
        List<Integer> aList = new ArrayList<Integer>(set);
        return aList;
    }
}