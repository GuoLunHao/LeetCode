#pragma once
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        map<char, size_t> charMap;

        for (size_t i = 0, j = 0; i < s.length(); i++)
        {
            if (charMap.find(s[i]) != charMap.end())
            {
                j = max(j, charMap[s[i]] + 1);
            }

            charMap[s[i]] = i;
            maxLength = max(maxLength, i - j + 1);
        }

        return maxLength;
    }

    inline int max(int a, int b)
    {
        return a > b ? a : b;
    }
};