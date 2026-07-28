class MedianFinder:

    def __init__(self):
        #smallHeap is maxHeap bcz when pops we get the middle element which is max of small Heap
        #largeHeap is minheap bcz when pops we get the middle element which is min of large Heap
        self.smallHeap,self.largeHeap=[],[]

    def addNum(self, num: int) -> None:
        heapq.heappush(self.smallHeap,-1*num)

        if self.smallHeap and self.largeHeap and -1*self.smallHeap[0]>self.largeHeap[0]:
            val=-1*heapq.heappop(self.smallHeap)
            heapq.heappush(self.largeHeap,val)
        
        if len(self.smallHeap) > len(self.largeHeap)+1 :
            val=-1*heapq.heappop(self.smallHeap)
            heapq.heappush(self.largeHeap,val)

        if len(self.smallHeap)+1 < len(self.largeHeap) :
            val=heapq.heappop(self.largeHeap)
            heapq.heappush(self.smallHeap,-1*val)
        
    def findMedian(self) -> float:
        if len(self.smallHeap) > len(self.largeHeap) :
            return -1*self.smallHeap[0]
        if len(self.smallHeap) < len(self.largeHeap) :
            return self.largeHeap[0]

        return (-1*self.smallHeap[0]+self.largeHeap[0])/2
        


        
        