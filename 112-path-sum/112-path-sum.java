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
    
    boolean res = false;
    public boolean hasPathSum(TreeNode root, int targetSum) {
        
      return hasPathSum(root, targetSum, 0);
    }
    public boolean hasPathSum(TreeNode root, int targetSum, int sum) {
        
       if (root == null) {
            return res;
        }
        if ((root.left == null && root.right == null) && root.val+sum == targetSum) {
            res = true;
            return true;
        }
        hasPathSum(root.left, targetSum, sum+root.val);
        hasPathSum(root.right, targetSum, sum+root.val);
        return res;
    }
     
}