#pragma once
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        
        unsigned int uNum = num;

        char hex[17] = "0123456789abcdef";
        stack<char> resultStack;

        while(uNum > 0)
        {
            resultStack.push(hex[uNum % 16]);
            uNum /= 16;
        }
        
        if (resultStack.size() == 0)
        {
            resultStack.push('0');
        }

        string result;
        while (resultStack.size() > 0)
        {
            result.push_back(resultStack.top());
            resultStack.pop();
        }

        return result;
    }
};