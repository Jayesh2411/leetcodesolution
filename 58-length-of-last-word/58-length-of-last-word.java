class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        
        String words[] = s.split(" ");
        return words[words.length-1].length();
    }
}