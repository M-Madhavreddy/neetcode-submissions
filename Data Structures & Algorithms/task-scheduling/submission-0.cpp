class Solution {
public:
    //in this problem the optiml solution is start processing with most reptative 
    //tasks before less repetative so that idle time for cpu is filled by less repetative  
    //thereby reducing the overall TAT for all tasks
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> count;
        for(int i=0;i<tasks.size();i++){
                count[tasks[i]]++;   
        }
        priority_queue<int> pq;
        for(auto it:count){
            pq.push(it.second);
        }
        queue<pair<int,int>> q; //to store the remaning count and when to arrive back
        int time=0;
        while(!pq.empty() || !q.empty()){
            if(!q.empty()){
                pair<int,int> front=q.front();
                if(front.second==time){
                pq.push(front.first);
                q.pop();
                }
            }
            if(!pq.empty()){
                int task=pq.top();
                pq.pop();
                task=task-1;
                if(task!=0) q.push({task,time+n+1});
            } 
            time++;  
        }
        return time;
    }
};
