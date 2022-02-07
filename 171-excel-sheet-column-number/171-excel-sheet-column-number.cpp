class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        reverse(columnTitle.begin(),columnTitle.end());
        int num = 0;
        for(int i=0;i<len;i++)
        {
            num = num + pow(26,i)*((int(columnTitle[i]))-64);
        }
        return num;
    }
};