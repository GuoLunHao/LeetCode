#pragma once
#include <stack>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        stack<char> num1Stack;
        stack<char> num2Stack;
        stack<char> resultStack;

        for (char num : num1)
        {
            num1Stack.push(num);
        }

        for (char num : num2)
        {
            num2Stack.push(num);
        }

        int carry = 0;
        while (num1Stack.size() > 0 && num2Stack.size() > 0)
        {
            int num1 = num1Stack.top() - '0';
            int num2 = num2Stack.top() - '0';

            char resultChar = (num1 + num2 + carry) % 10 + '0';
            resultStack.push(resultChar);
            
            carry = (num1 + num2 + carry) / 10;

            num1Stack.pop();
            num2Stack.pop();
        }

        while (num1Stack.size() > 0)
        {
            int num1 = num1Stack.top() - '0';

            char resultChar = (num1 + carry) % 10 + '0';
            resultStack.push(resultChar);

            carry = (num1 + carry) / 10;

            num1Stack.pop();
        }

        while (num2Stack.size() > 0)
        {
            int num2 = num2Stack.top() - '0';

            char resultChar = (num2 + carry) % 10 + '0';
            resultStack.push(resultChar);

            carry = (num2 + carry) / 10;

            num2Stack.pop();
        }
        if (carry > 0)
        {
            resultStack.push('0' + carry);
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