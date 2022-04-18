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
    public int findSecondMinimumValue(TreeNode root) {
        PriorityQueue<Integer> q = new PriorityQueue<>();
        
        traverse(root, q);
        int a = q.poll();
        while (q.size() != 0) {
            
            int b = q.poll();
            if (a != b) {
                return b;
            }
            a = b;
        }
        return -1;
    }
    
    void traverse(TreeNode root, PriorityQueue<Integer> q) {
        if (root == null) {
            return;
        }
        q.add(root.val);
        traverse(root.left, q);
        traverse(root.right, q);
    }
}