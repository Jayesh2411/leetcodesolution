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
    public void flatten(TreeNode root) {
        ArrayList<TreeNode> list = new ArrayList<>();
        
        preorder(list,root);
        TreeNode pre = root;
        TreeNode curr = null;
        for(int i =1;i<list.size();i++) {
            curr = list.get(i);
            pre.left = null;
            pre.right = curr;
            pre = curr;
        }
    }
    public void preorder(ArrayList<TreeNode> list ,TreeNode root) {
        if (root == null) {
            return;
        }
        list.add(root);
        preorder(list,root.left);
        preorder(list,root.right);
    }
}