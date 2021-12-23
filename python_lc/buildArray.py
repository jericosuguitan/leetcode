# Jerico Suguitan
# 12/21/2021
# link: https://leetcode.com/problems/build-array-from-permutation/
# runtime: 124 ms

class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans = []
        
        for i in nums:
            ans.append(nums[i])
            
        return ans