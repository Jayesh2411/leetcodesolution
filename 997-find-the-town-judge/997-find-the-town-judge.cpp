class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector< pair <int , int> > graph;
        graph.resize( n , {0,0} );
        for (int i = 0; i < trust.size(); i++ )
        {
            graph[trust[i][0]-1].first++;
            graph[trust[i][1]-1].second++;
        }
        for( int i = 0; i < n ; i++ )
            if( graph[i].first == 0 && graph[i].second == n-1 )
                return i + 1;
        return -1;
    }
};