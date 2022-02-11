class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        string first = s1;
        sort(first.begin(),first.end());
        string second;
        for(int i=0;i<(s2.length()-s1.length()+1);i++)
        {
            second = s2.substr(i,s1.length());
            sort(second.begin(),second.end());
            if(first==second)
                return true;
        }
        return false;
    }
};