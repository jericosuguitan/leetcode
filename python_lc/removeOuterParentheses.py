# Jerico Suguitan
# 12/21/2021
# link: https://leetcode.com/problems/remove-outermost-parentheses/
# runtime: 28 ms


class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        stack = []
        decomp = ""
        result = ""
        
        for a in s:
            decomp += a
            
            if a == "(":
                stack.append(a)
                
            else: # )
                stack.pop()
                
                if len(stack) == 0:
                    result += decomp[1:-1]
                    decomp = ""
        
        return result