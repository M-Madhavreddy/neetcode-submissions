class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2,0);
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[i+nums.size()]=nums[i];
        }
        // for(int i=0;i<nums.size();i++){
        //     ans.push_back(nums[i]);
        // }
        return ans;
    }
};