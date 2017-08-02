class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        while (A[0] == 0) and len(A) > 1:
            del (A[0])
        if A[0] == 0 and len(A) == 1:
            A[0] = 1
            return A
        i = len(A) - 1
        carry = 1
        while True:
            value = A[i] + carry
            if value >= 10:
                A[i] = value % 10
                carry = value // 10
            else:
                A[i] = value
                break
            if i == 0:
                A.insert(0, carry)
                break
            i -= 1
        return A
