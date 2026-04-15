class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int pair=k-nums[i];

            if(mp[pair]>0){
                count++;
                mp[pair]--;
            }else{
                mp[nums[i]]++;
            }
        }
        return count;
    }
};