# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    


    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        inorder=[]

        def inorderRec(root: Optional[TreeNode]):
            if(root==None):
                return 
            
            inorderRec(root.left)
            inorder.append(root.val)
            inorderRec(root.right)
        
        inorderRec(root)
        return inorder

        