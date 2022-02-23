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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int size = 0;
        ListNode t = head;
        if (t == null) {
            return head;
        }
        while(t != null) {
            size++;
            t = t.next;
        }
        
        int nth = size-n+1;
        t = head;
        ListNode prev = null;
        
        while (nth-- > 1){
            prev = t;
            t = t.next;
        }
        if(prev == null){
            head = head.next;
            return head;
        }
        prev.next = t.next;
        return head;
    }
}