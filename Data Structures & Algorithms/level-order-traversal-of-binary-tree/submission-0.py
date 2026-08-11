# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from queue import Queue

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root: return []
        q=Queue()
        q.put((root,0))
        prev=0
        ans=[]
        lst=[]
        
        while not q.empty():
            node,lvl=q.get()
            if prev==lvl :
                lst.append(node.val)
            else:
                ans.append(lst)
                lst=[]
                lst.append(node.val)
                prev=lvl
            if node.left:
                q.put((node.left,lvl+1))
            if node.right:
                q.put((node.right,lvl+1))
        ans.append(lst)
        return ans

            
            
            




        
        