# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:

        def BST(root):
            if not root:
                return TreeNode(val=val)
            if val>root.val:
                node=BST(root.right)
                if not root.right: root.right=node
            else:
                node=BST(root.left)
                if not root.left: root.left=node

        if not root: return BST(root)
        BST(root)
        return root

