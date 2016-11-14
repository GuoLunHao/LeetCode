#pragma once
#include <map>
using namespace std;

class Solution {
private:
    map<int, int> steps;
public:
    int climbStairs(int n) {
        if (n <= 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        if (steps.find(n) == steps.end())
        {
            steps[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return steps[n];
    }
};