#pragma once
#include <vector>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min = nums[0];
        
        for (int num : nums)
        {
            if (min > num)
            {
                min = num;
            }
        }

        int moves = 0;
        for (int num : nums)
        {
            moves += num - min;
        }

        return moves;
    }
};