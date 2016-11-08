#pragma once
#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letterCountNote[26] = { 0 };
        int letterCountMagazine[26] = { 0 };

        for (size_t i = 0; i < ransomNote.length(); i++)
        {
            char letter = ransomNote[i];
            letterCountNote[letter - 'a']++;
        }

        for (size_t i = 0; i < magazine.length(); i++)
        {
            char letter = magazine[i];
            letterCountMagazine[letter - 'a']++;
        }

        for (size_t i = 0; i < 26; i++)
        {
            if (letterCountNote[i] > letterCountMagazine[i]) {
                return false;
            }
        }

        return true;
    }
};