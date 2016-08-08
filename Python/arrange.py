class Solution:
    # @param A : list of integers
    def arrange(self, A):
        n = len(A)
        B = [0]*n
        for i in range(n):
            B[i] = A[i]
        for i in range(n):
            A[i] = B[B[i]]
        
