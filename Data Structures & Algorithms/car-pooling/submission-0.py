class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        trips.sort(key= lambda t:t[1])

        minHeap, curpas=[],0

        for trip in trips:
            pas=trip[0]
            start=trip[1]
            end=trip[2]
            curpas+=pas
            while minHeap:
                end2, pas2 = heapq.heappop(minHeap)
                curpas-=pas2
                if not end2 <= start:
                    heapq.heappush(minHeap,(end2,pas2))
                    curpas+=pas2
                    break                 

            if curpas>capacity: return False
            heapq.heappush(minHeap,(end,pas))

        return True

        