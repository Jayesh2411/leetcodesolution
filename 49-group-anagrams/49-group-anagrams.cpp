class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> store;
        string t;
        for(string s:strs)
        {
            t=s;
            sort(t.begin(),t.end());
            store[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for(auto str:store)
            anagrams.push_back(str.second);
        return anagrams;
    }
};