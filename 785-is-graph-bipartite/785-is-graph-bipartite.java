class Solution {
    public boolean isBipartite(int[][] graph) {
        
        boolean[] isVisited = new boolean[graph.length];
        boolean[] colored = new boolean[graph.length];
        for (int i = 0;i<graph.length;i++) {
            ArrayDeque<Integer> queue = new ArrayDeque<>();
            queue.offer(i);
            
            while(!queue.isEmpty()) {
                int node = queue.poll();
                isVisited[node] = true;
                for (int next:graph[node]) {
                    if(isVisited[next]) {
                        if(colored[next] == colored[node] ) {
                            return false;
                        }
                    } else {
                        queue.offer(next);
                        
                        colored[next] = !colored[node] ;
                    }
                }
            }
        }
        return true;
    }
}