#pragma once
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> numberInS1;

        for (int number : nums1)
        {
            numberInS1[number]++;
        }

        vector<int> result;

        for (int number : nums2)
        {
            if (numberInS1[number] > 0)
            {
                result.push_back(number);
                numberInS1[number]--;
            }
        }

        return result;
    }
};
