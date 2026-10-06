#include<bits/stdc++.h>

class Solution {
public:
    int options(int i,vector<int>& nums,int n){
        if(i==n-1) return nums[i];
        if(i>=n) return 0;
        return max(nums[i]+options(i+2,nums,n),nums[i]+options(i+3,nums,n));
    }
    int rob(vector<int>& nums) {
        return max(options(0,nums,nums.size()),options(1,nums,nums.size()));
    }
};
