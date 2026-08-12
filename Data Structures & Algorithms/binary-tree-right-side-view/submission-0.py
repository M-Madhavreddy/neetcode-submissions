# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue

class Solution:

    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return []
        q=Queue()
        q.put((root,0))
        prev=0
        ans=[]
        while not q.empty():
            node,lvl=q.get()
            if prev!=lvl:
                ans.append(val)
            
            val=node.val
            if node.left: q.put((node.left,lvl+1))
            if node.right: q.put((node.right,lvl+1))
            prev=lvl
        ans.append(val)
        return ans



        