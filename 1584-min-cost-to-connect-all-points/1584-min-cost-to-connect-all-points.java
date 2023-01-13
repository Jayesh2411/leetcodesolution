class Solution {
    public int minCostConnectPoints(int[][] points) {
        int n = points.length;
        int mstCost = 0;
        int edgesUsed = 0;
        HashSet<Integer> inMST = new HashSet<>();
       
        int minDist[] = new int[n];
        minDist[0] = 0;
        for (int i = 1;i<n;i++) {
            minDist[i] = Integer.MAX_VALUE;
        }
        
        while(edgesUsed < n) {
            int currNode = -1;
            int currMinEdge = Integer.MAX_VALUE;
            for (int i = 0;i<n;i++) {
                if (!inMST.contains(i) && currMinEdge > minDist[i]) {
                    currMinEdge = minDist[i];
                    currNode = i;
                    
                }
            }  
            inMST.add(currNode);
            mstCost += currMinEdge;
            edgesUsed++;
            
            for(int nextNode = 0 ;nextNode<n;nextNode++) {
                int nextWt = Math.abs(points[currNode][0]-points[nextNode][0])+Math.abs(points[currNode][1]-points[nextNode][1]);
                if(!inMST.contains(nextNode) && minDist[nextNode] > nextWt) {
                    
                    minDist[nextNode] = nextWt;
                }
            }
        }
        
        return mstCost;
    }
}