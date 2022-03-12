class Solution {
    void paranthesize(int open, int close, string ans, vector<string> &result)
    {
        if(open == 0 && close == 0)
        {
            result.push_back(ans);
            return;
        }
        if(open - 1 <= close && open - 1 >= 0)
            paranthesize(open-1,close,ans+"(", result);
        if(close - 1 >= open && close - 1 >= 0)
            paranthesize(open,close-1,ans+")",result);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        paranthesize(n,n,"",result);
        return result;
    }
};