class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        unordered_map<char,int> m;
        int end = 0;
        int result = 0;
        for(char c : s)
        {
            if(m.find(c)!=m.end() && m[c] >= start)
                start = m[c]+1;
            m[c]=end;
            ++end;
            result = max(result,end-start);
        }
        return result;
    }
};


/*
abccabcbb
start = 0

end = 2
p x
w x
w 2
k
e
w

*/