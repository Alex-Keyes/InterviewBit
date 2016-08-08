class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def gcd(self, a, b):
        if (b == 0):
		    return a
        else:
		    return self.gcd(b, a%b)
