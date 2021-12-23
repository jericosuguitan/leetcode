# Jerico Suguitan
# 12/22/2021
# link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
# runtime: 208 ms

class Solution:
    def maxDepth(self, s: str) -> int:
        stack = []
        Max = 0
        count = 0
        
        for a in s:
            if a == "(":
                count += 1
                stack.append(a)
            elif a == ")":
                if Max < count:
                    Max = count
                stack.pop()
                count -= 1
                
        return Max