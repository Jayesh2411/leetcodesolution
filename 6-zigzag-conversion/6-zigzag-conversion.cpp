class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        vector<string> rows(min(int(s.length()),numRows));
        bool goingDown = false;
        int currRow = 0;
        for(char c : s)
        {
            rows[currRow] += c;
            if(currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;
            int toAdd = goingDown?1:-1;
            currRow += toAdd;
        }
        string result = "";
        for(auto str : rows)
            result += str;
        return result;
    }
};