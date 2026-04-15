class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        int count=0;
        int notfilled=0;
        while(numBottles>=numExchange){
            sum+=numBottles/numExchange;
            count=numBottles/numExchange;
            notfilled=numBottles%numExchange;
            numBottles=notfilled+count;
        }
        return sum;
    }
};