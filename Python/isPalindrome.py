class Solution:
    # @param A : integer
    # @return an integer
    def isPalindrome(self, A):
        A = str(A)
        for i in range(len(A)/2+1):
            if A[i] != A[-(i+1)]:
                return 0
        return 1
