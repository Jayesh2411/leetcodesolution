class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s.isEmpty()) {
            return 0;
        }
        HashSet <Character> set = new HashSet<>();
        int max = 0; int right = 0, left = 0;
        while (right<s.length()) {
            if(!set.contains(s.charAt(right))) {
                set.add(s.charAt(right));
                right++;
            } else {
                set.remove(s.charAt(left));
                left++;
            }
            max = Math.max(max, right-left);
        }
        
        return max;
    }
}