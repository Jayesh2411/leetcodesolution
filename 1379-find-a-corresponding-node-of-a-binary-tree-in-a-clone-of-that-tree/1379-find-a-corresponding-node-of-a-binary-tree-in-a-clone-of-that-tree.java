/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    TreeNode node;
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
        if (target == null) {
            return cloned;
        }
        findInClone(original, cloned, target);
        return node;
    }
    
    void findInClone( TreeNode original,  TreeNode cloned,  TreeNode target) {
        if (original == null) {
            return;
        }
        if (target == original) {
            node = cloned;
            return;
        }
        findInClone(original.left, cloned.left, target);  findInClone(original.right, cloned.right, target);
        
    }
}