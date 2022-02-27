class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxFreq = 0;
        vector<int> freq(26,0);
        int maxCount = 0, result = 0, start = 0, end = 0;
        while(end < s.length())
        {
            freq[s[end++]-'A']++;
            maxCount = maxCount > freq[s[end-1]-'A']? maxCount : freq[s[end-1]-'A'];
            while(end-start-maxCount > k)
            {
                freq[s[start]-'A']--;
                start++;
                for(int i : freq)
                    maxCount = maxCount > i? maxCount : i;
            }
            result = max(end-start,result);
        }
        return result;
    }
};


