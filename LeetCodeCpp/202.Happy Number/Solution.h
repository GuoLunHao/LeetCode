#pragma once
#include <map>
using namespace std;

class Solution {
private:
    int squares_sum(int n) {
        int sum = 0;
        while (n)
        {
            sum += (n % 10)*(n % 10);
            n /= 10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        map<int, bool> mark;
        
        while (mark.find(n) == mark.end())
        {
            mark[n] = true;
            n = squares_sum(n);
            if (n == 1)
            {
                return true;
            }
        }

        return false;
    }
};