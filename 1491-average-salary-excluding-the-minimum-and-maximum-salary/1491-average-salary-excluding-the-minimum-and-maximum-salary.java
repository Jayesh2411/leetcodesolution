class Solution {
    public double average(int[] salary) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for (int i =0;i<salary.length;i++) {
            if (salary[i] > max) {
                max=salary[i];
            }
            
            if(salary[i] < min) {
                min=salary[i];
            }
            sum += salary[i];
        }
        sum -= (min+max);
        double avg = sum/Double.valueOf((salary.length-2));
        return avg;
    }
}