#include "LeetCode.h"

//O(n), O(1); good solution - easy followup from I.

//122. Best Time to Buy and Sell Stock II - medium
int LeetCode::maxProfitII(std::vector<int>& prices){
    int L = 0;
    int R = 1;
    int maxProfit = 0;
    int profit = 0;

    while(R < prices.size()){
        if (prices[L] < prices[R]){
            profit = prices[R] - prices[L];
            maxProfit += profit;
        }
        L = R;
        R += 1;
    }
    
    return maxProfit;
}