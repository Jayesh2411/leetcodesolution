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
    public ListNode removeElements(ListNode head, int val) {
        if(head == null) return head;
        if(head.val == val) return removeElements(head.next, val);
        ListNode crawl = head;
        
        while(crawl != null && crawl.next != null){
            if(crawl.next.val == val){
                crawl.next = crawl.next.next;
            } else crawl = crawl.next;
        }
        
        return head;
    }
}