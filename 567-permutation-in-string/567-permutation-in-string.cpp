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
        while(i < s2.length()&&(first+s1.length()<=s2.length()))
        {
            while(m[s2[i]]!=0 && i < s2.length())
            {
                if(first==last)
                    first=i;
                last=i+1;
                if(last-first==s1.length())
                   return true;
                m[s2[i]]--;
                ++i;
            }
            while(s2[first]!=s2[last])
            {
                m[s2[first]]++;
                ++first;
            }
            if(first!=last)
                {
                ++first;
            ++last;}
            ++i;
        }
        return false;
    }
};