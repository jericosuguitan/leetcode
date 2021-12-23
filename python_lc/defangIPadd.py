# Jerico Suguitan
# 12/22/2021
# link: https://leetcode.com/problems/defanging-an-ip-address/
# runtime: 28 ms

class Solution:
    def defangIPaddr(self, address: str) -> str:
        ans = ""
        for a in address:
            if a == ".":
                ans += "[.]"
            else:
                ans += a
                
        return ans