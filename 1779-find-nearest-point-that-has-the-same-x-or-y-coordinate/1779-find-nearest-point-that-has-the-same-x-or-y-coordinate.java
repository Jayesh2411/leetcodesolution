class Solution {
    public int nearestValidPoint(int x, int y, int[][] points) {
  
        int k = -1;
        int min = Integer.MAX_VALUE;
        
        for (int i = 0;i<points.length;i++) {
            if (points[i][0] == x || points[i][1] == y) {
                
                int mDis = Math.abs(points[i][0]-x) + Math.abs(points[i][1]-y);
                if (min > mDis) {
                    min = mDis;
                    k = i;
                }
            }
            
            
        }
        return k;
    }
}