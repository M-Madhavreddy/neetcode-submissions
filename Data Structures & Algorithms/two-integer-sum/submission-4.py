class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexs={}

        for i,n in enumerate(nums):
            diff=target-n
            if diff in indexs :
                return [indexs[diff],i]
            indexs[n]=i
        

        


        