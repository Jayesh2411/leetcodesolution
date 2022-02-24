/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        string result = "";
        vector<int> num;
        int fact = 1;
        for(int i = 1; i <= n; i++)
        {
            num.push_back(i);
            fact *= i;
        }
        fact /= n;
        --k;
        --n;
        while(num.size()!=0)
        {
            int index = k/fact;
            result += to_string(num[index]);
            k = k%fact;
            num.erase(num.begin()+index);
            if(num.size()>1)
                fact /= num.size();
        }
        return result;
    }
};
// @lc code=end

