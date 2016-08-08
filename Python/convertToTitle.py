class Solution:
    # @param A : integer
    # @return a strings
    def convertToTitle(self, A):
        ret = ''
        while A != 0:
            A = A-1
            temp = A%26
            A /= 26
            ret += chr(temp+ord('A'))
        return ret[::-1]
