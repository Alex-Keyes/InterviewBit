class Solution:
    def primesum(self, n):
        for i in xrange(2, n):
            if self.is_prime(i) and self.is_prime(n - i):
                return i, n - i

    def is_prime(self, n):
        if n < 2:
            return False

        for i in xrange(2, int(n**0.5) + 1):
            if n % i == 0:
                return False

        return True
