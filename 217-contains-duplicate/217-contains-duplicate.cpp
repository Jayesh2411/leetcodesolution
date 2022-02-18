class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> appeared;
        for(int i:nums)
        {
            if(appeared.find(i)!=appeared.end())
                return true;
            else
                appeared.insert(i);
        }
        return false;
    }
};