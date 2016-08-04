class Solution:
    # @param A : integer
    # @return a boolean
    def isPower(self, N):
        if N == 0:
            return False
        if N == 1:
            return True
        for p in xrange(2,33):
            for A in xrange(2, int(N**(1.0 / p)) + 2):
                if A**p == N:
                    return True
        return False
