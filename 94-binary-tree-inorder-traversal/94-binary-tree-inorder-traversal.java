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
    List<Integer> list = new LinkedList<Integer>();
    Stack<TreeNode> stack = new Stack<TreeNode>();
    public List<Integer> inorderTraversal(TreeNode root) {
        if (root == null) {
            return list;
        }
        TreeNode current = root;
        while (current != null || !stack.isEmpty()) {
            
            while(current != null) {
                stack.push(current);
                current = current.left;
            }
            if (current == null && stack.isEmpty()) {
                break;
            } 
            current = stack.pop();
            list.add(current.val);
            current=current.right;
                
        }
        return list;
    }
}