# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param A : head node of linked list
    # @param B : head node of linked list
    # @return the head node in the linked list
    def addTwoNumbers(self, A, B):
        a, b = A, B
        head = ListNode(0)
        cur_sum = head
        while a != None or b != None or cur_sum.val > 9:
            carry = cur_sum.val / 10
            cur_sum.val %= 10
            a_val = 0 if a == None else a.val
            b_val = 0 if b == None else b.val
            next_val = a_val + b_val + carry
            cur_sum.next = ListNode(next_val)
            cur_sum = cur_sum.next
            a = None if a == None else a.next
            b = None if b == None else b.next
        return head.next
