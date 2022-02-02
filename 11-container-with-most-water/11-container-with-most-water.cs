public class Solution {
public int MaxArea(int[] height) 
    {
        var h = height;
        int i = 0, j = h.Length - 1, result = 0;

        while (i < j)
        {
            result = Math.Max(result, Math.Min(h[i], h[j]) * (j - i));
            
            if (h[i] < h[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
        
        return result;
    }
}