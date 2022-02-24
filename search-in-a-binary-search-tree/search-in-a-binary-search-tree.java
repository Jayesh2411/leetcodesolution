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
   TreeNode newTree;
    public TreeNode searchBST(TreeNode root, int val) {
        return getRoot(root,val);
        
    }
    public TreeNode getRoot(TreeNode root, int val) {
        if (root == null) {
            return root;
        }
        if (root.val == val) {
            newTree = root;
            return newTree;
        }
        getRoot(root.left, val);
        getRoot(root.right, val);
        return newTree;
    }
}