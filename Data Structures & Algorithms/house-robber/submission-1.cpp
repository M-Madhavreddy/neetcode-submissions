#include<bits/stdc++.h>

class Solution {
public:
    int options(int i,vector<int>& nums,int n,vector<int>& mem){
        if(i==n-1) return nums[i];
        if(i>=n) return 0;
        if(mem[i]!=-1) return mem[i];
        mem[i]=max(nums[i]+options(i+2,nums,n,mem),nums[i]+options(i+3,nums,n,mem));
        return mem[i];
    }
    int rob(vector<int>& nums) {
        vector<int> mem(nums.size(),-1);
        return max(options(0,nums,nums.size(),mem),options(1,nums,nums.size(),mem));
    }
};
