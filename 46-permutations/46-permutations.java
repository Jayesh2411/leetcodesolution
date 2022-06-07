class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList(new ArrayList());
        generatePermutations(nums,0,nums.length-1, list);
        return list;
    }
    
    void generatePermutations(int nums[],  int i, int n, List<List<Integer>>  list) {
        if(i == n) {
            List<Integer> l = IntStream.of(nums).boxed().collect(Collectors.toList());
            list.add(l);
            return;
        }
        for (int j = i;j<=n;j++) {
            swap(nums, i, j);
            generatePermutations(nums, i+1,n,list);
            swap(nums,i,j);
        }
    }
    
    void swap(int nums[], int i , int j) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}

// 0 2