public class Solution {
    public int LengthOfLongestSubstring(string s) {
        Dictionary<char,int> d = new Dictionary<char,int>();
        int max = 0;
        int i = 0;
        int start = 0;
        foreach (var c in s)
        {
            if(!d.ContainsKey(c))
            {
                d.Add(c,i);
            }
            else
            {
                if(d[c]<start)
                {
                    d[c]=i;
                }
                else
                {
                    max = max>(i-start)?max:(i-start);
                    start=d[c]+1;
                    d[c]=i;
                }
            }
            ++i;
        }
        max = max>(i-start)?max:(i-start);
        return max;
    }
}