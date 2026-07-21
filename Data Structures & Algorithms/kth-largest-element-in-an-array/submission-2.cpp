class Solution {
public:
    int quickSelect(vector<int>& nums,int l,int r,int index){
        int pivot=nums[r];
        int p=l;
        for(int i=l;i<r;i++){
            if(nums[i]<=pivot){
                swap(nums[i],nums[p]);
                p++;
            }
        }
        swap(nums[p],nums[r]);
        if(p>index) return quickSelect(nums,0,p-1,index);
        else if(p<index) return quickSelect(nums,p+1,r,index);
        else return nums[p];

    }

    int findKthLargest(vector<int>& nums, int k) {
        int index=nums.size()-k;
        int n=nums.size();
        return quickSelect(nums,0,n-1,index);

    }
};
