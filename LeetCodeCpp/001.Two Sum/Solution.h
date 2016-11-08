#pragma once
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};