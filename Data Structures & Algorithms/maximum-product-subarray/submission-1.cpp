class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cur_max=nums[0];
        int cur_min=nums[0];
        int cur=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(cur_max,cur_min);
            }
            cur_max=max(nums[i],cur_max*nums[i]);
            cur_min=min(nums[i],cur_min*nums[i]);
            result=max(result,cur_max);
        }
        return result;
    }
};
