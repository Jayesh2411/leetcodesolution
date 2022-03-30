class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int> m;
        for(int i: nums)
        {
            m[i]++;
        }
        int min1 = 0, min2 = 0;
        for(auto i : m)
        {
            int temp = min1;
            if(m[i.first-1] != 0)
            {
                min1 = max(i.first*i.second+min2,min1);
            }
            else
                min1 += i.first*i.second;
            min2 = temp;
        }
        return min1;        
    }
};

