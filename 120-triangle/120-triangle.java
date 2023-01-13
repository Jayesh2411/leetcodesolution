class Solution {
    
    int[][] dp;
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();
        dp = new int[n][triangle.get(n-1).size()];
        for(int i =0;i<n;i++) {
            for(int j =0;j<triangle.get(n-1).size();j++) {
                dp[i][j] = -1;
            }
        }
        return solve(0,0,triangle.size()-1,triangle);
    }
     public int solve(int i, int j, int n, List<List<Integer>> triangle) {
         if(n == i) {
             
             dp[i][j] = triangle.get(i).get(j);
             return dp[i][j];
         }
         
         if(dp[i][j] != -1) {
             return dp[i][j];
         }
          dp[i][j] = Math.min(solve(i+1,j,n,triangle), solve(i+1,j+1,n,triangle))+triangle.get(i).get(j);
         return dp[i][j];
     }
    
}