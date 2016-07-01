class Solution:
    # @param A : integer
    # @return an integer
    def trailingZeroes(self, n):
        i = 1
        result = 0
        while n >= i:
            i *= 5
            result += n/i  # (taking floor, just like Python or Java does)
        return result
