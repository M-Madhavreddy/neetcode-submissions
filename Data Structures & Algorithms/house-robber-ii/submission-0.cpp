class Solution {
public:
    int options(int start,vector<int>& nums , int index){
        if(index==nums.size()-1){
            if(start==0) return 0;
            else return nums[index];
        }
        if(index>=nums.size()) return 0;
        return max(nums[index]+options(start,nums,index+2),nums[index]+options(start,nums,index+3));
    }
    int rob(vector<int>& nums) {
        return max(options(0,nums,0),options(1,nums,1));
    }
};
