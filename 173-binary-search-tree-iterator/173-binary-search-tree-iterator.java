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
class BSTIterator {
    int max=0;
    TreeNode curr,here;
    Stack<TreeNode>s=new Stack<>();
    public BSTIterator(TreeNode root) {
        curr=root;
        while(curr.right!=null){
            curr=curr.right;
        }
        max=curr.val;
        curr=root;
    }
    
    public int next() {
        while(curr!=null){
            s.push(curr);
            curr=curr.left;
        }
        TreeNode temp=s.pop();
        here=temp;
        curr=temp.right;
        return temp.val;
    }
    
    public boolean hasNext() {
        if(here!=null&&here.val==max)return false;
        return true;
    }
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */