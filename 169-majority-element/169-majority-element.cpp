class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majEl, count = 0;
        for(auto it : nums)
        {
            if(count == 0)
                majEl = it;
            count = it == majEl? count + 1 : count - 1;
        }
        return majEl;
    }
};