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
    public ListNode oddEvenList(ListNode head) {
        if(head == null) return head;
        ListNode temp = head;
        ListNode firstEven = head.next;
        ListNode odd = head;
        boolean isOdd = true;
        while(temp != null){
            ListNode next = temp.next;
            if(temp.next != null){
                temp.next = temp.next.next;   
            }
            if(isOdd){
                odd = temp;
                isOdd = false;
            }else{
                isOdd = true;
            }
            temp = next;
        }
        odd.next = firstEven;
        return head;
    }
}