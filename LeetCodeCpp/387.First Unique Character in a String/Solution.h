#pragma once
#include<string>
#include <map>
using namespace std;

struct LetterMark
{
    int position;
    int count;
};

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, LetterMark> LetterMap;

        for (size_t i = 0; i < s.length(); i++)
        {
            if (LetterMap[s[i]].count == 0)
            {
                LetterMap[s[i]].position = i;
            }
            LetterMap[s[i]].count++;
        }

        int position = INT_MAX;

        for (auto Letter : LetterMap)
        {
            if (Letter.second.count == 1 && Letter.second.position < position)
            {
                position = Letter.second.position;
            }
        }

        if (position == INT_MAX)
        {
            position = -1;
        }

        return position;
    }
};