class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int small=0;
        int large=n-1;

        while(small<=large){
            int mid=small+(large-small)/2;

            if(nums[mid]==target){
                return true;
            }
            if(nums[small]==nums[mid] && nums[mid]==nums[large]){
                small++;
                large--;
            }
            else if(nums[small]<=nums[mid]){
                if(nums[small]<=target && target<nums[mid]){
                    large=mid-1;
                }
                else{
                    small=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[large]){
                    small=mid+1;
                }else{
                    large=mid-1;
                }
            }
        }
        return false;
    }
};