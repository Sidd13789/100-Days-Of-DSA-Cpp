class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int first=INT_MAX;
        int last=INT_MAX;
        for(int num:nums){
            if(num<=first){
                first=num;
            }else if(num<=last){
                last=num;
            }
            else{
                return true;
            }
        }
        return false;
    }
};