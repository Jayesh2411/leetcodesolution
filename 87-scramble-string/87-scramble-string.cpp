class Solution {
    unordered_map<string,bool> map;
    bool solve(string s1, string s2)
    {
        if(s1==s2)
            return true;
        if(s1.length()<=1)
            return false;
        string key = s1 + "_" + s2;
        if(map.find(key)!=map.end())
            return map[key];
        bool solution = false;
        bool cond1,cond2;
        int i = 0;
        int j = s1.length();
        for(int k = 1; k < j; k++)
        {
            cond1 = isScramble(s1.substr(i,k),s2.substr(j-k,k))&&isScramble(s1.substr(k,j-k),s2.substr(i,j-k));
            cond2 = isScramble(s1.substr(i,k),s2.substr(i,k))&&isScramble(s1.substr(k,j-k),s2.substr(k,j-k));
            solution = cond1 || cond2;
            if(solution)
                break;
        }
        map.insert({key,solution});
        return solution;
    }
public:
    bool isScramble(string s1, string s2) {
        return solve(s1,s2);
    }
};