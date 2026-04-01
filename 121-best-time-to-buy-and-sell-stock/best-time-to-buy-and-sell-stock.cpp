class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprices=prices[0];
        int maxprices=0;
        for(int i=0;i<n;i++){
            int profit=prices[i]-minprices;
            minprices=min(minprices,prices[i]);
            maxprices=max(maxprices,profit);
        }
        return maxprices;
    }
};