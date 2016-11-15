#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;

        int size = digits.size();
        int carry = 1;

        for (int i = size - 1; i >= 0; i--)
        {
            int temp = (carry + digits[i]) % 10;
            carry = (carry + digits[i]) / 10;
            
            result.push_back(temp);
        }

        if (carry != 0)
        {
            result.push_back(carry);
        }

        reverse(result.begin(), result.end());

        return result;
    }
};