class Solution {
     List<List<Integer>> list = new ArrayList();
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<Integer> nums = new ArrayList<>();
        
        
        getAllCombination(nums, 1, n, k);
        return list;
    }
    
    public void getAllCombination(List<Integer> l, int s, int n, int k) {
        if (l.size() == k) {
            if (n == 0) {
                list.add(new ArrayList(l));
            }
                return;
        } 
        for (int i = s;i<=9;i++) {
            l.add(i);
            getAllCombination(l,s+1,n-i,k);
            l.remove(l.size()-1);
            s++;
        }
    }
}