#include<bits/stdc++.h>
class Solution {
public:

    int dfs(vector<int>& coins, int amount,map<int,int>& mem){
        if(amount == 0) return 0;
        if(mem.find(amount)!=mem.end()) return mem[amount];
        int res=1e9;
        for(auto coin:coins){
            if(amount-coin>=0){
                res=min(res,1+dfs(coins,amount-coin,mem));
            }
        }
        mem[amount]=res;
        return mem[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        map<int,int> mem;
        int count=dfs(coins,amount,mem);
         return (count==1e9) ? -1 : count;
    }
};
