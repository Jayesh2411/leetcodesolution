class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        if(s1.length()==0)
            return true;
        map<char,int> m;
        int i;
        for(i=0;i<s1.length();i++)
            m[s1[i]]++;
        int first,last;
        first=0;
        last=0;
        i=0;
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