class Solution {
    vector<int> ngr(vector<int>& graph)
    {
        stack<int> index;
        vector<int> result(graph.size(),0);
        for(int i = graph.size() - 1; i >= 0; i--)
        {
            while(!index.empty() && graph[index.top()] >= graph[i] )
                index.pop();
            if(index.empty())
                result[i] = graph.size()-1;
            else
                result[i] = index.top()-1;
            index.push(i);
        }
        return result;
    }
    vector<int> ngl(vector<int>& graph)
    {
        stack<int> index;
        vector<int> result(graph.size(),0);
        for(int i = 0; i < graph.size(); i++)
        {
            while(!index.empty() && graph[index.top()] >= graph[i] )
                index.pop();
            if(index.empty())
                result[i] = 0;
            else
                result[i] = index.top()+1;
            index.push(i);
        }
        return result;
    }
    int maxArea(vector<int>& graph)
    {
        vector<int> NGR = ngr(graph);
        vector<int> NGL = ngl(graph);
        int ans = 0;
        for(int i = 0; i < graph.size(); i++)
            ans = max(ans,(NGR[i] - NGL[i]+1)*graph[i]);
        return ans;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> barGraph(matrix[0].size(),0);
        int ans = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == '0')
                    barGraph[j] = 0;
                else
                    barGraph[j]++;
            }
            ans = max(ans,maxArea(barGraph));
        }
        return ans;
    }
};