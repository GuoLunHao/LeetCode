#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        size_t n = ;

        int maxProfit = 0;
        
        for (size_t i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i-1] && prices[i-1] < buyPrice) {
                buyPrice = prices[i-1];
                sellPrice = prices[i];
            }
            else if (prices[i] > prices[i-1] && prices[i] > sellPrice)
            {
                sellPrice = prices[i];
            }
            else if ((prices[i] < prices[i-1] || i == n-1) && sellPrice > buyPrice) {
                maxProfit += sellPrice - buyPrice;
                buyPrice = INT32_MAX;
            }
        }

        return maxProfit;
    }
};