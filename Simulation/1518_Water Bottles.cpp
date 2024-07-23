class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;

        while(numBottles >= numExchange){
            int full = numBottles / numExchange;
            int rem = numBottles % numExchange;

            count+= full;
            numBottles = full+rem;
        }
        return count;
    } 
};