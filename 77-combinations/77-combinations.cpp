class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        v.resize(k);
        dfs(1, n, k);
        return r;
    }
private:
    vector<vector<int> > r;
    vector<int> v;
    void dfs(int i, int n, int k) {
        while (i <= n) {
            v[v.size() - k] = i++;
            if (k > 1)
                dfs(i, n, k - 1);
            else
                r.push_back(v);
        }
    }
};