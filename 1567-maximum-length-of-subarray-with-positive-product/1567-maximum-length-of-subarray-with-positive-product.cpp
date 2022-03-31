class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int ans = 0, negSoFar = 0, firstNeg = -1;
        int lastZero = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                lastZero = i;
                negSoFar = 0;
            }
            else
            {
                if(nums[i] < 0)
                {
                    ++negSoFar;
                    if(negSoFar == 1)
                        firstNeg = i;
                }
                if(negSoFar%2 == 0)
                    ans = max(ans,i-lastZero);
                else
                    ans = max(ans,i-firstNeg);
            }

        }
        return ans;    
    }
};