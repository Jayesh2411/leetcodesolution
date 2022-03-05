class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> ans(n,0);
        ans[0] = 1;
        int curr = 1;
        for(int i = 1 ; i < ratings.size(); i++)
        {
            if(ratings[i] > ratings[i-1])
            {
                curr++;
            }
            else
                curr = 1;
            ans[i] = curr;
        }
        curr = ans[n-1];
        for(int i = n - 2; i >= 0; i--)
        {
            if(ratings[i] > ratings[i+1])
            {
                curr++;
            }
            else
                curr = 1;
            ans[i] = max(curr,ans[i]);
        }
        return accumulate(ans.begin(),ans.end(),0);
        
    }
};