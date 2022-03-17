class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i =0;i<s.length();i++) {
            if (map.containsKey(s.charAt(i))) {
                int c = map.get(s.charAt(i));
                map.put(s.charAt(i), ++c);
            } else{
                map.put(s.charAt(i),1);
            }
        }
        int max = 0;
        int add = 0;
        for (Character ch :map.keySet()) {
            if (map.get(ch) % 2 == 0) {
                max += map.get(ch);
            } else if (map.get(ch)-1  == 0 ){
                add = 1;
            } else {
                add =1;
                max += (map.get(ch)-1);
            }
        }
        
        max += add;
        return max;
    }
}