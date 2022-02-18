class Solution {
    void addOne(vector<int>& bitmask)
    {
        int carry = 1 ;
        int i = bitmask.size()-1;
        while(carry&&i>=0)
        {
            if(bitmask[i]==1)
            {
                bitmask[i]=0;
                --i;
            }
            else
            {
                bitmask[i]=1;
                carry=0;
            }
        }
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        vector<int> sub;
        vector<int> bitmask(nums.size(),0);
        for( int i = 0 ; i < pow(2,nums.size()) ; i++ )
        {
            for(int j=0;j<nums.size();j++)
                if(bitmask[j]==1)
                    sub.push_back(nums[j]);
            addOne(bitmask);
            subset.push_back(sub);
            sub.clear();
        }
        return subset;
    }
};