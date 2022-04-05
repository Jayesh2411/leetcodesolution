bool comp(int a, int b)
{
    string order1 = to_string(a) + to_string(b);
    string order2 = to_string(b) + to_string(a);
    return order1 > order2;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        string ans;
        for(int i : nums)
            ans += to_string(i);
        if(ans[0] == '0')
            return "0";
        return ans;
    }
};