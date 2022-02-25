class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        if(s1.length()==0)
            return true;
        unordered_map<char,int> m;
        for(char c : s1)
            m[c]++;
        int first,last;
        first=0;
        last=0;
        while(last < s2.length()&&(first+s1.length()<=s2.length()))
        {
            while(m[s2[last]]!=0 && last < s2.length())
            {
                
                m[s2[last]]--;
                ++last;
                if(last-first==s1.length())
                   return true;
            }
            while(s2[first]!=s2[last])
            {
                m[s2[first]]++;
                ++first;
            }
            m[s2[first++]]--;
            m[s2[last++]]++;
        }
        return false;
    }
};