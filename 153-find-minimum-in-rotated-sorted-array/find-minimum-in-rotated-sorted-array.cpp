class Solution {
public:
    int findMin(vector<int>& nums) {
        int m=0;
        int n=nums.size()-1;
        while(m<n){
            int mid=(m+n)/2;
            if(nums[mid]>nums[n]){
                m=mid+1;
            }else{
                n=mid;
            }
        }
        return nums[m];
    }
};