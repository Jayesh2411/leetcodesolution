class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m;
        vector<string> result;
        for(int i = 0; i+10 <= s.length(); i++)
        {
            string temp = s.substr(i,10);
            if(m[temp] == 2)
                continue;
            m[temp]++;
            if(m[temp] == 2)
                result.push_back(temp);
        }
        return result;
    }
};