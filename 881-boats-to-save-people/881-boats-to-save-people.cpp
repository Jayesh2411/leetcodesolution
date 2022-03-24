class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int low = 0, high = people.size()-1;
        int ans = 0;
        while(low < high)
        {
            if(people[low] + people[high] > limit)
                --high;
            else
            {
                ++low;
                --high;
            }
            ++ans;
        }
        if(low == high)
            ++ans;
        return ans;
    }
};