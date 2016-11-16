#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        if (prices.size() < 1)
        {
            return maxProfit;
        }

        int buyPrice = prices[0];

        for (size_t i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {
                buyPrice = prices[i];
            }
            if (prices[i] - buyPrice > maxProfit) {
                maxProfit = prices[i] - buyPrice;
            }
        }

        return maxProfit;
    }
};