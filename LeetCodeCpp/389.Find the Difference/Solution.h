#pragma once
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        if (t.length() - s.length() != 1)
        {
            return ' ';
        }

        int result = 0;

        for (size_t i = 0; i < s.length(); i++)
        {
            result ^= s[i] ^ t[i];
        }

        return result ^ t[t.length()-1];
    }
};