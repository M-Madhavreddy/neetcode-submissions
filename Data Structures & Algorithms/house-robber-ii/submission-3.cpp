class Solution {
public:
    int options(int start,vector<int>& nums , int index, vector<int> mem){
        if(index==nums.size()-1){
            if(start==0) return 0;
            else return nums[index];
        }
        if(index>=nums.size()) return 0;
        if(mem[index]!=-1) return mem[index];
            mem[index]=max(nums[index]+options(start,nums,index+2,mem),nums[index]+options(start,nums,index+3,mem));
            return mem[index];
    }

    int rob(vector<int>& nums) {
        vector<int> mem(nums.size(),-1);
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        if(nums.size()==3) return max(nums[1],max(nums[2],nums[0]));

        return max(options(0,nums,0,mem),options(1,nums,1,mem));
    }
};
