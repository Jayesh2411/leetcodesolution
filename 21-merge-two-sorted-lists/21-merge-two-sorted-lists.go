/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
    
    var newList *ListNode
    head := newList
    for list1 != nil && list2 != nil {
        var node *ListNode
        if list1.Val < list2.Val {
            node = list1
            list1 = list1.Next
        } else {
            node = list2
            list2 = list2.Next
        }
        if head == nil {
            head = node
            newList = node
        } else {
            head.Next = node
            head = head.Next
        }
    }
    for list1 != nil {
        var node *ListNode
        node = list1
        list1 = list1.Next
        
        if head == nil {
            head = node
            newList = node
        } else {
            head.Next = node
            head = head.Next
        }
    }
    for list2 != nil {
        var node *ListNode
        node = list2
        list2 = list2.Next
        
        if head == nil {
            head = node
            newList = node
        } else {
            head.Next = node
            head = head.Next
        }
    }
    return newList
}