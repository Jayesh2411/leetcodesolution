class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        unordered_map<char,int> m;
        int end = 0;
        int result = 0;
        for(char c : s)
        {
            if(m.find(c)==m.end())
            {
                m.insert({c,end});
                cout<<c<<" "<<m[c]<<endl;
                ++end;
            }
            else
            {
                int i = start;
                result = max(result,end-start);
                start = m[c]+1;
                for(; i <= m[c]; i++)
                    m.erase(s[i]);
                m[c]=end;
                ++end;
            }
        }
        return max(result,end-start);
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