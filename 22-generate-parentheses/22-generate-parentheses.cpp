class Solution {
    vector<string> result;
    void paranthesize(int open, int close, string ans)
    {
        if(open == 0 && close == 0)
        {
            result.push_back(ans);
            return;
        }
        if(open > close || (close == 0 && open != 0)|| close < 0 || open < 0)
            return;
        paranthesize(open-1,close,ans+"(");
        paranthesize(open,close-1,ans+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        paranthesize(n,n,"");
        return result;
    }
};