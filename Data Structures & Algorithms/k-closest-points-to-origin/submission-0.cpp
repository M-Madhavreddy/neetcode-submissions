class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>>> pq;
        vector<vector<int>> sol;
        for(auto& it : points){
            double dis=sqrt(it[0]*it[0] + it[1]*it[1]);
            pq.push({dis,{it[0],it[1]}});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()){
           pair<double,pair<int,int>> ans=pq.top();
           pq.pop();
           vector<int> xy;
            xy.push_back(ans.second.first);
            xy.push_back(ans.second.second);
            sol.push_back(xy);
        }
        return sol;
    }
};
