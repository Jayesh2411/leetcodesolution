class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length())
            return "";
        string ans = s;
        unordered_map<char,int> freq;
        for(char c:t)
            freq[c]++;
        int end = 0, begin = 0;
        bool flag = false;
        int counter = freq.size();
        while( end < s.length() )
        {
            if(freq.find(s[end])!=freq.end())
            {
                freq[s[end]]--;
                if(freq[s[end]]==0)
                    counter--;
            }
            ++end;
            while(counter==0)
            {
                ans = ans.length()<(end-begin)?ans:s.substr(begin,end-begin);
                if(freq.find(s[begin])!=freq.end())
                {
                    freq[s[begin]]++;
                    if(freq[s[begin]]==1)
                        counter++;
                }
                begin++;
                flag = true;
            }
            
        }
        return flag?ans:"";
    }
};