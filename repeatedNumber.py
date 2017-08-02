class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    def repeatedNumber(self, A):
        a=list(A)
        a.sort()
        r=0
        m=0
        for i in range(0,len(a)-1):
            if a[i]==a[i+1]:
                r=a[i]
                break
        s=sum(a)
        d=(len(a)*(len(a)+1))/2
        m=r+(d-s)
        return [r,m]
