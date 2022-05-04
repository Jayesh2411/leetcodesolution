class Solution {
    public boolean isBipartite(int[][] graph) {
        
        boolean[] isVisited = new boolean[graph.length];
        boolean[] colored = new boolean[graph.length];
        for (int i = 0;i<graph.length;i++) {
            if( !dfs(graph, i, isVisited, colored)){
                return false;
            }
        }
        return true;
    }
    boolean dfs(int[][] graph, int i, boolean[] isVisited, boolean[] colored) {
        if (isVisited[i]) return true;
       
        isVisited[i]=true;
        for (int next:graph[i]) {
            if (isVisited[next]) {
                if (colored[next] == colored[i]) {
                    return false;
                }
            } else {
                colored[next] = !colored[i];
                if (!dfs(graph, next, isVisited, colored)) return false;
            }
        }
        return true;
    }
}