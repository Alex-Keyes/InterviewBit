# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param A : head node of linked list
    # @return the head node in the linked list
    def reorderList(self, A):
        arr = []
        ca = A
        alen = 0
        while ca:
            arr.append(ca)
            alen += 1
            ca = ca.next
        cn = arr[0]
        for i in xrange(1, alen):
            if i%2 == 0:
                cn.next = arr[i/2]
                cn = cn.next
                if i == alen - 1:
                    cn.next = None
            else:
                cn.next = arr[alen - i/2 - 1]
                cn = cn.next
                if i == alen - 1:
                    cn.next = None
        return A
