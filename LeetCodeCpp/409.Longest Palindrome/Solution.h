#pragma once
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int letterCount[128] = {};

        for (auto letter : s)
        {
            letterCount[letter]++;
        }

        int oddCount = 0;

        for (auto count : letterCount)
        {
            if (count % 2 != 0)
            {
                oddCount++;
            }
        }

        int subtractor = (oddCount > 0) ? (oddCount - 1) : 0;

        return s.length() - subtractor;
    }
};