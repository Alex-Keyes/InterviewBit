class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, A):
        A += 1
        ret = []
        if A == 0:
            return ret
        ret = [[1]]
        for i in range(2,A+1):
            ret.append([0]*i)
            ret[i-1][0] = 1
            ret[i-1][-1] = 1
            for j in range(1,i-1):
                ret[i-1][j] = ret[i-2][j-1]+ret[i-2][j]
        return ret[-1]
