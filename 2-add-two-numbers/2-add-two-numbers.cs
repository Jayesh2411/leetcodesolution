/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result= new ListNode(0);
        ListNode temp = result;
        int flag = 0,a,b;
        result.val=0; 
        while(l1!=null || l2!=null)
        {
            a=0;
            b=0;
            if(l1!=null)
            {
                a=l1.val;
                l1=l1.next;
            }
            if(l2!=null)
            {
                b=l2.val;
                l2=l2.next;
            }
            if(a+b+temp.val>9)
            {
                temp.val=(temp.val+a+b)%10;
                flag = 1;
            }
            else
            {
                temp.val=temp.val+a+b;
                flag=0;
            }            
            if((l1!=null || l2!=null)||flag==1)
            {
                temp.next= new ListNode(flag);
                temp=temp.next;
            }
        }
        return result;
    }
}