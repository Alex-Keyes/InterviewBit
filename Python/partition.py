class Solution:
    # @param {ListNode} head
    # @param {integer} x
    # @return {ListNode}
    def partition(self, head, x):
        if not head:
            return None

        less, greaterEqual = ListNode(0), ListNode(0)
        tempLess, tempGreaterEqual, temp = less, greaterEqual, head
        while temp:
            if temp.val < x:
                tempLess.next = temp
                tempLess = tempLess.next
            else:
                tempGreaterEqual.next = temp
                tempGreaterEqual = tempGreaterEqual.next

            cur = temp
            temp = temp.next
            cur.next = None

        tempLess.next = greaterEqual.next
        return less.next
