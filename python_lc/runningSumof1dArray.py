# Jerico Suguitan
# 6/23/2022
# link: https://leetcode.com/problems/running-sum-of-1d-array/
# runtime: 43 ms

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum = 0
        runSum = []
        
        for i in nums:
            sum += i
            runSum.append(sum)
            
        return runSum