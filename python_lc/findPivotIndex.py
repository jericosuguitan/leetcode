# Jerico Suguitan
# 6/24/2022
# link: https://leetcode.com/problems/find-pivot-index/
# runtime: ~30 ms


# mine takes way too long, 8000ms
class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        ans = -1
        for idx, i in enumerate(nums):
            if sum(nums[:idx]) == sum(nums[idx+1:]):
                ans = idx
                break
        return ans

# 150 ms
class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        k = 0
        r = sum(nums)
        for i in range(len(nums)):
            r -= nums[i]
            if k == r:
                return i 
            k += nums[i]
           
        return -1        