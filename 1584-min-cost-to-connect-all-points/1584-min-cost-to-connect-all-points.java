class Solution {
    public int minCostConnectPoints(int[][] points) {
        int n = points.length;
        int mstCost = 0;
        int edgesUsed = 0;
        HashSet<Integer> inMST = new HashSet<>();
        PriorityQueue<Pair<Integer, Integer>> minHeap = new PriorityQueue<>((a, b) -> (a.getKey() - b.getKey()));
        
        
        minHeap.add(new Pair(0,0));
        
        while(edgesUsed < n) {
            Pair<Integer,Integer> topElement = minHeap.poll();
            
            int weight = topElement.getKey();
            int currNode = topElement.getValue();
            
            if (inMST.contains(currNode)) {
                continue;
            }            
            inMST.add(currNode);
            
            mstCost += weight;
            edgesUsed++;
            
            for(int nextNode = 0 ;nextNode<n;nextNode++) {
                if(!inMST.contains(nextNode)) {
                    int nextWt = Math.abs(points[currNode][0]-points[nextNode][0])+Math.abs(points[currNode][1]-points[nextNode][1]);
                    minHeap.add(new Pair(nextWt, nextNode));
                }
            }
        }
        
        return mstCost;
    }
}