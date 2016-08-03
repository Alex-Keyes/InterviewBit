class Solution:
    # @param A : integer
    # @return a list of list of integers
    def generate(self, numRows):
        result = []
        for i in xrange(numRows):
            result.append([])
            for j in xrange(i + 1):
                if j in (0, i):
                    result[i].append(1)
                else:
                    result[i].append(result[i - 1][j - 1] + result[i - 1][j])
        return result
