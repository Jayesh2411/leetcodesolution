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
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if (head == null || head.next == null || left == right) {
            return head;
        }
        ListNode curr=head;
        ListNode newHead=null;
        int c = 1;
        while(curr != null && c++ < left) {
            newHead = curr;
            curr = curr.next;
        }
         
        int k = right-left;
        ListNode next = null;
        ListNode prev = null;
        while(k-- >= 0) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        if ( left == 1){
            head = prev;
        }else {
            newHead.next = prev;
        }
           
        while(prev.next != null) {
            prev = prev.next;
        }
        prev.next = curr;
        return head;
    }
}