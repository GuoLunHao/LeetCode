#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (size_t i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                result.push_back("FizzBuzz");
            }
            else if (i % 5 == 0)
            {
                result.push_back("Buzz");
            }
            else if (i % 3 == 0)
            {
                result.push_back("Fizz");
            }
            else
            {
                char number[20];
                sprintf(number, "%d", i);
                result.push_back(number);
            }
        }

        return result;
    }
};