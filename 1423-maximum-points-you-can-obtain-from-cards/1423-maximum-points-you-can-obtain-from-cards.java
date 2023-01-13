class Solution {
    int max = 0;
    public int maxScore(int[] cardPoints, int k) {
        int sum = 0;
        int l = cardPoints.length-1;
        for (int i =0;i<k;i++) {
            sum += cardPoints[i];
        }
        int max = sum;
        for (int i = k-1;i>= 0;l--,i--) {
            sum += cardPoints[l]-cardPoints[i];
            max = Math.max(sum, max);
        }
        return max;
    }
}

