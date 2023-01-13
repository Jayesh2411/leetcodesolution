/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int deepestLeavesSum(TreeNode root) {
       return findSumInorderDFS(root, 0);
    }
    int maxHeight = 0;
    int maxSum = 0;
    public int findSumInorderDFS(TreeNode root, int height) {
         if (root == null) {
             return maxSum;
         }
         height += 1;
         findSumInorderDFS(root.left, height);
         if (root.left == null && root.right == null) {
            if (height > maxHeight) {
                maxHeight = height;
                maxSum = root.val;
            } else if(height == maxHeight) {
                maxSum += root.val;
            }
        }
        
        findSumInorderDFS(root.right, height);
        return maxSum;
     }
    
    
    
}