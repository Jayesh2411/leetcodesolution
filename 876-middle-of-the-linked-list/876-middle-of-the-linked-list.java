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
    public ListNode middleNode(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        
        if (head.next.next == null) {
            head = head.next;
            return head;
        }
        
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null && fast.next != null && fast.next.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if (fast.next == null) {
                head = slow;
                break;
            }
            if (fast.next.next == null) {
                slow = slow.next;
                head = slow;
                break;
            }
        }
        
        return head;
    }
}