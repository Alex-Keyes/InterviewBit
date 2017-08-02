class Solution:
    # @param A : list of integers
    # @return the same list of integer after modification
    def nextPermutation(self, A):
        if len(A) == 1:
            return A

        if len(A) == 2:
            self.swap(A, 0, 1)
            return A

        for i in xrange(len(A) - 2, 0, -1):

            if A[i - 1] >= A[i] >= A[i + 1] and i != 1:
                continue

            if A[i - 1] >= A[i] >= A[i + 1] and i == 1:
                for j in xrange(len(A) / 2):
                    self.swap(A, j, len(A) - 1 - j)
                return A

            if (A[i - 1] >= A[i] or A[i - 1] <= A[i]) and A[i] <= A[i + 1]:
                self.swap(A, i, i + 1)
                return A

            if A[i] >= A[i - 1] and A[i] >= A[i + 1] and A[i - 1] >= A[i + 1]:
                temp = sorted(A[i:])
                for j in xrange(i, len(A)):
                    A[j] = temp[j - j]
                    temp.pop(j - j)
                low = A[i - 1]
                for j in xrange(i, len(A)):
                    if A[j] > low:
                        self.swap(A, j, i - 1)
                        break
                return A

            if A[i] >= A[i - 1] and A[i] >= A[i + 1] and A[i - 1] <= A[i + 1]:
                temp = sorted(A[i:])
                for j in xrange(i, len(A)):
                    A[j] = temp[j - j]
                    temp.pop(j - j)
                low = A[i - 1]
                for j in xrange(i, len(A)):
                    if A[j] > low:
                        self.swap(A, j, i - 1)
                        break
                return A

    def swap(self, A, index_i, index_j):
        temp = A[index_i]
        A[index_i] = A[index_j]
        A[index_j] = temp


