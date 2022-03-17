public class Solution {
    public int LengthOfLastWord(string s) {
        int end, start;
        int i = s.Length - 1;
        while(i >= 0 && s[i] == ' ')
            --i;
        if(i == -1)
            return i;
        end = i;
        while(i >= 0 && s[i] != ' ')
            --i;
        return end - i;
    }
}