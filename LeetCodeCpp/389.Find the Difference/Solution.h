#pragma once
#include <string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int letterCountS[26] = { 0 };
        int letterCountT[26] = { 0 };

        for (size_t i = 0; i < s.length(); i++)
        {
            char letter = s[i];
            letterCountS[letter - 'a']++;
        }

        for (size_t i = 0; i < t.length(); i++)
        {
            char letter = t[i];
            letterCountT[letter - 'a']++;
        }

        for (size_t i = 0; i < 26; i++)
        {
            if (letterCountS[i] != letterCountT[i]) {
                return i + 'a';
            }
        }

        return ' ';

    }
};