class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=0;
        for(int i=0;i<n;i++){  
            if(candies[i]>maxi) {
            maxi=candies[i];
            }
        }
        vector<bool>result;
        for(int i=0;i<n;i++){
            int sum=candies[i]+extraCandies;       
            
            if(sum>=maxi){
            result.push_back(true) ;
        }
        else{
           result.push_back(false);
        }
        }
        return result;
    }
};