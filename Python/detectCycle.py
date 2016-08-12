class Solution:
    # @param A : head node of linked list
    # @return the head node in the linked list
    def detectCycle(self, A):
        seen = set()
        while A:
            if A.val in seen:
                return A
            else:
                seen.add(A.val)
                A = A.next
