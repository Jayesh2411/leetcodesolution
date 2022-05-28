class Solution {
    public boolean isIsomorphic(String s, String t) {
        if (s == null || t == null || s.length() != s.length()) {
            return false;
        }
        HashMap<Character, Character> map = new HashMap<>();
        
        for (int i = 0;i<s.length();i++) {
            if(!map.containsKey(s.charAt(i))) {
                if(map.containsValue(t.charAt(i))) {
                    return false;
                }
                map.put(s.charAt(i), t.charAt(i));
            } else {
               if( map.get(s.charAt(i)) != t.charAt(i)) {
                    return false;
                }
            }
        }
        
        return true;
    }
}