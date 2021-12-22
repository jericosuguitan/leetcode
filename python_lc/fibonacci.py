# Jerico Suguitan
# 12/21/2021
# link: https://leetcode.com/problems/fibonacci-number/
# runtime: 34

class Solution:
    def fib(self, n: int) -> int:
        F = [0,1]
        
        if n < 2:
            return F[n]
        
        for i in range(2,n+1):
            val = F[i-1] + F[i-2]
            F.append(val)
            
        return F[-1]