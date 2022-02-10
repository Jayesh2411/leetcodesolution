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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode temp = head;
        ListNode newNode = null;
         ListNode root = null;
        while (temp != null) {
            while (temp.next != null && temp.next.val == temp.val) {
                temp=temp.next;
            }
            ListNode node = new ListNode();
                node.val = temp.val;
            if(newNode == null) {
                newNode = node;
                root = node;
            }else {
                newNode.next = node;
                newNode = newNode.next;
            }
            temp = temp.next;
        }
        return root;
    }
}