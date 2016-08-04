class Solution:
    # @param A : integer
    # @return an integer
    def reverse(self, A):
        A = str(A)
        if A[0] == '-':
            A = '-'+A[1:][::-1]
        else:
            A = A[::-1]
            A = int(A)
        if A > 2**31 or A < -2**31:
            return 0
        return A
