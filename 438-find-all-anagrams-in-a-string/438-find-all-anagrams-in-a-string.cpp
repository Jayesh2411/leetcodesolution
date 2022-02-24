class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map < char , int > store;
        for( char c : p )
        {
            store[c]++;
        }
        vector<int> indices;
        int l = 0, r = 0;
        while(l <= s.length() - p.length() && r <= s.length() )
        {
            if(store[s[r]]!=0)
            {
                store[s[r]]--;
                if(r + 1 - l == p.length())
                {
                    indices.push_back(l);
                    store[s[l]]++;
                    ++l;
                }
            }
            else
            {
                
                while(s[l]!=s[r])
                {
                   store[s[l]]++;
                    ++l;
                }
                store[s[r]]--;
                store[s[l]]++;
                ++l;
            }
            ++r;
        }
        return indices;
        
    }
};