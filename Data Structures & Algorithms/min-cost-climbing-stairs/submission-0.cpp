#include<bits/stdc++.h>
class Solution {
public:
    int options(int index,vector<int>& cost){
        if(index>=cost.size()) return 0;
        return min(cost[index]+options(index+1,cost),cost[index]+options(index+2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(options(0,cost),options(1,cost));
    }
};
