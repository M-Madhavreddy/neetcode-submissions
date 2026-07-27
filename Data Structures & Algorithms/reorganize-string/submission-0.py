class Solution:
    def reorganizeString(self, s: str) -> str:
        freq = Counter(s)
        maxHeap=[] #maxheap not possible so we will take minheap with neg count

        for char,count in freq.items():
            heapq.heappush(maxHeap,[-count,char])

        res=[]
        prev_count,prev_char=0,""

        while maxHeap:
            count,char=heapq.heappop(maxHeap)
            count=count+1;
            res.append(char)
            if prev_count<0 :
                heapq.heappush(maxHeap,[prev_count,prev_char])
            
            prev_count,prev_char=count,char

        if len(res)!=len(s):
            return ""
        
        return "".join(res)
        