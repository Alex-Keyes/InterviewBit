class Solution:
    # @param A : string
    # @return an integer
    def titleToNumber(self, A):
        n = len(A)
        A = A[::-1]
        ret = 0
        for i in range(n):
            ret += (26**(i))*(ord(A[i])-ord('A')+1)
        return ret
