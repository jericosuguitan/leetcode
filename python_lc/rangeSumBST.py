# Jerico Suguitan
# 12/22/2021
# link: https://leetcode.com/problems/range-sum-of-bst/
# runtime: 208 ms

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        curr = 0
        
        if root == None:
            return 0
        
        if root.val >= low and root.val <= high:
            curr += root.val
            
        if root.val > high:
            return curr + self.rangeSumBST(root.left, low, high)
        
        if root.val < low:
            return curr + self.rangeSumBST(root.right, low, high)
        
        return curr + self.rangeSumBST(root.left, low, high) + self.rangeSumBST(root.right, low, high)
    
    
