class Solution {
public:
    int options(int end,vector<int>& nums , int index, vector<int>& mem){
        if(index>end) return 0;
        if(mem[index]!=-1) return mem[index];
            mem[index]=max(options(end,nums,index+1,mem),nums[index]+options(end,nums,index+2,mem));
            return mem[index];
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        
        vector<int> mem1(nums.size(),-1);
        int case1=options(nums.size()-2,nums,0,mem1); //exclude last house

        vector<int> mem2(nums.size(),-1);
        int case2=options(nums.size()-1,nums,1,mem2);
        return max(case1,case2);
    }
};
