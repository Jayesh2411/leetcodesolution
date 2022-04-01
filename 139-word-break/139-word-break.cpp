class Solution {
    bool findTruth(string s, int start, unordered_set<string> &w,vector<bool> &dp)
    {
        if(s.size() == start)
            return true;
        if(dp[start] == false)
            return false;
        for(int i = start; i < s.length(); i++)
        {
            if(w.find(s.substr(start,i+1-start)) != w.end())
            {
                if(findTruth(s,i+1,w,dp) == true)
                    return true;
                else
                    dp[i+1] = false;
            }
        }
        return false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp;
        dp.resize(s.length()+1,true);
        unordered_set<string> w;
        for(auto x : wordDict)
            w.insert(x);
        return findTruth(s,0,w,dp);
    }
};