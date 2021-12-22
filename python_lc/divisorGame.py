# Jerico Suguitan
# 12/21/2021
# link: https://leetcode.com/problems/divisor-game/
# runtime: 32

class Solution:
    def divisorGame(self, n: int) -> bool:
        return n % 2 == 0

        # # if aTurn is even, it is Alice's turn
        # aTurn = 0
        
        # while n != 1:
        #     n = n - 1
        #     aTurn += 1
        
        # # % check
        # if aTurn % 2 == 0:
        #     return False
        # else:
        #     return True
        