# Jerico Suguitan
# 12/22/2021
# link: https://leetcode.com/problems/merge-two-binary-trees/
# runtime: 208 ms

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        curr = 0
        
        if root1 == None and root2 == None:
            return None
        elif root1 == None:
            curr = root2.val
            return TreeNode(curr, root2.left, root2.right)
        elif root2 == None:
            curr = root1.val
            return TreeNode(curr, root1.left, root1.right)
        else:
            curr = root1.val + root2.val
            return TreeNode(curr, self.mergeTrees(root1.left, root2.left), self.mergeTrees(root1.right, root2.right))