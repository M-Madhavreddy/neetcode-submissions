class Solution {
public:
    priority_queue<int> pq;

    int lastStoneWeight(vector<int>& stones) {
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x-y!=0) pq.push((x-y));
        }
        if(pq.size()!=0) return pq.top();
        return 0;
    }
};
