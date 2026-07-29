class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        #will take minHeap for capital and add capital, profit so when ever we get new
        #capital we now pop the capital and check eligibilty and add that to maxheap
        #which is holding profits

        capheap,profHeap = [],[]

        for cap,profit in zip(capital,profits):
            heapq.heappush(capheap,(cap,profit))

        totalCapital=0
        
        while k:
            while capheap and capheap[0][0]<=w:
                cap,profit = heapq.heappop(capheap)
                heapq.heappush(profHeap,-1*profit)
            
            if profHeap:
                w+= -1*heapq.heappop(profHeap)
                k-=1

        return w;
                
            
            


