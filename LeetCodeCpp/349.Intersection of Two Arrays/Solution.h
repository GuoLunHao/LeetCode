#pragma once
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> numberInS1;
        map<int, bool> numberInS2;

        for (auto number : nums1)
        {
            numberInS1[number] = true;
        }

        vector<int> result;

        for (auto number : nums2)
        {
            if (numberInS1[number] == true && numberInS2[number] == false)
            {
                result.push_back(number);
                numberInS2[number] = true;
            }
        }

        return result;
    }
};