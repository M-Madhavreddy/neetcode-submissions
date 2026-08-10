# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:

        def deleteInBST(root):
            if not root : return None
            if root.val==key:
                if not root.left:
                    root=root.right
                    return root
                if not root.right:
                    root=root.left
                    return root
                cur=root.right
                while cur.left:
                    cur=cur.left
                root.val=cur.val
                root.right=deleteInBST(root.right)
                return root

                return root
            if key>root.val:
                root.right=deleteInBST(root.right)
            if key<root.val:
                root.left=deleteInBST(root.left)
        
        deleteInBST(root)
        return root
        


                
        