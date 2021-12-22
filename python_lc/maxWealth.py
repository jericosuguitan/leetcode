# Jerico Suguitan
# 12/21/2021
# link: https://leetcode.com/problems/richest-customer-wealth/
# runtime: 56 ms

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        Max = 0
        
        for i in accounts:
            if sum(i) > Max:
                Max = sum(i)
        
        return Max