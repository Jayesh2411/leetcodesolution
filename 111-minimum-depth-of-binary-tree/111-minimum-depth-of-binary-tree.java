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
    int minDepth = Integer.MAX_VALUE;

    public int minDepth(TreeNode root) {
        return depth(root, 0);
    } 
    
    public int depth(TreeNode root, int depth) {
        if (root == null) {
            return 0;
        }else {
            depth++;
        }
        if (root.left == null && root.right == null && depth<minDepth) {
            minDepth = depth;
        }
        depth(root.left, depth);
        depth(root.right, depth);
        return minDepth;
        
    }
}