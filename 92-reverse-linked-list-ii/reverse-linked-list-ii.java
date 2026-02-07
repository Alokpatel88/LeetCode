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
        if (head == null || head.next == null) {
            return head;
        }

        ListNode temp1 = head;
        ListNode temp2 = head;

        List<Integer> values = new ArrayList<>();
        while (temp1 != null) {
            values.add(temp1.val);
            temp1 = temp1.next;
        }
        Collections.reverse(values.subList(left - 1, right));

        int index = 0;
        while (index < values.size() && temp2 != null) {
            temp2.val = values.get(index);
            temp2 = temp2.next;
            index++;
        }

        return head;
    }
}
