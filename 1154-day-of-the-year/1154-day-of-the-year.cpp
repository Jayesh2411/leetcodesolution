class Solution {
public:
    int dayOfYear(string s) {
        int y,m,d;
        y = stoi(s.substr(0,4));
        m = stoi(s.substr(5,2));
        d = stoi(s.substr(8));
        int leap = 0;
        if(m > 2)
        {
            if(y%100 == 0)
                y = y/100;
            if(y%4 == 0)
                leap++;
        }
        vector<int> days = {0,31,59,90,120,151,181,212,243,273,304,334};
        int ans = days[m-1] + d + leap;
        return ans;
    }
};