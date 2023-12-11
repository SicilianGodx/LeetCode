#include "LeetCode.h"

//O(n), O(1); good solution, not much can be done to make it better.
//Good usage of the sliding window technique.

//121. Best Time to Buy and Sell Stock - easy

int LeetCode::maxProfit(std::vector<int>& prices){
    int L = 0;
    int R = 1;
    int maxProfit = 0;
    int profit = 0;

    while(R < prices.size()){
        if (prices[L] < prices[R]){
            profit = prices[R] - prices[L];
            maxProfit = std::max(maxProfit, profit);
        }
        else{
            L = R;
        }
        R += 1;
    }
    return maxProfit;
}