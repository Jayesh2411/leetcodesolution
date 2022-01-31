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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode newList = null;
        ListNode head = null;
        while (list1 != null && list2 != null) {
            ListNode node = new ListNode();
            if (list1.val <= list2.val) {
                node.val = list1.val;
                list1 = list1.next;
            } else {
                node.val = list2.val;
                list2 = list2.next;
            }
            if (newList == null) {
                head = node;
                newList = node;
            } else {
                newList.next = node;
                newList = newList.next;
            }
        }
        while (list1 != null) {
            ListNode node = new ListNode();
            node.val = list1.val;
            if (newList == null) {
                head = node;
                newList = node;
            } else {
                newList.next = node;
                newList = newList.next;
            }
            list1 = list1.next;
        }
        while (list2 != null) {
            ListNode node = new ListNode();
            node.val = list2.val;
            if (newList == null) {
                head = node;
                newList = node;
            } else {
                newList.next = node;
                newList = newList.next;
            }
            list2 = list2.next;
        }
        return head;
    }
    
}