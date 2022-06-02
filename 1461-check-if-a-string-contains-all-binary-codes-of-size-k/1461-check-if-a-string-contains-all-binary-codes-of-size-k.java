class Solution {
    public boolean hasAllCodes(String s, int k) {
        
        HashSet<String> set = new HashSet<>();
        int n = s.length();
        for(int i =k;i<=n;i++) {
            String str = s.substring(i-k,i);
            if (set.contains(str)) {
                continue;
            }
            set.add(str);
            
        }
        
        return set.size() == (int) Math.pow(2,k);
    }
}