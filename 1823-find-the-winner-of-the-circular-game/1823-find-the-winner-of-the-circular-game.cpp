class Solution {
    void findTheWinner(int k, vector<int>& circle, int index)
    {
        if(circle.size()==1)
            return;
        index+=k;
        index = index%circle.size();
        circle.erase(circle.begin()+index);
        findTheWinner(k,circle,index-1);
    }
public:
    int findTheWinner(int n, int k) {
        vector<int> circle(n,0);
        for(int i = 0; i < n; i++)
            circle[i]=i+1;
        findTheWinner(k,circle,-1);
        return circle[0];
    }
};