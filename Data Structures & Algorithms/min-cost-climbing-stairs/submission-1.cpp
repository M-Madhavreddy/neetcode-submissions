#include<bits/stdc++.h>
class Solution {
public:
    
    int options(int index,vector<int>& cost,vector<int>& mem){
        if(index>=cost.size()) return 0;
        if(mem[index]!=-1) return mem[index];
mem[index]=min(cost[index]+options(index+1,cost,mem),cost[index]+options(index+2,cost,mem));
        return mem[index];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> mem(cost.size(),-1);
        return min(options(0,cost,mem),options(1,cost,mem));
    }
};
