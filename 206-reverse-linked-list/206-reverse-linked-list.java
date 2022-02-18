/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        Stack<Integer> stack = new Stack();
        while(head != null) {
            stack.push(head.val);
            head = head.next;
        }
        ListNode newNode = null;
        ListNode newHead = null;
        while (stack.size() > 0) {
            if(newHead == null) {
                newNode = new ListNode(stack.pop());
                newHead = newNode;
                
            } else {
                newNode.next = new ListNode(stack.pop());
                newNode = newNode.next;
            }
        }
        return newHead;
    }
}