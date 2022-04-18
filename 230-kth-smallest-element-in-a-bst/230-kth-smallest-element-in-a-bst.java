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
   
    int count = 0;
    
    public int kthSmallest(TreeNode root, int k) {
        ArrayList<Integer> ans = new ArrayList<>();
        inorder(root, k, ans, count);
        return ans.get(k-1);
    }
    
    public void inorder(TreeNode root, int k, ArrayList<Integer> ans , int count){
        if(root == null) {
            return;
        }
        inorder(root.left, k,ans, count);
        ans.add(root.val);
        inorder(root.right,k,ans, count);
        
    }
}