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
        
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        int sum = 0, i;
        while(!queue.isEmpty()) {
            sum = 0;
            int s = queue.size();
            for( i = 0; i<s ;i++) {
                
                TreeNode currNode = queue.poll();
                sum += currNode.val;
                  if(currNode.right != null) {
                    queue.offer(currNode.right);
                }
                if(currNode.left != null) {
                    queue.offer(currNode.left);
                }
              
            }
        }
        return sum;
    }
    
}