#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        string result;

        for (size_t i = 0; i < numRows; i++) {
            size_t j = i;
            bool oddOrder = true;
            while (j < s.size()) {
                result += s[j];

                if (oddOrder || i == 0) {
                    j += 2 * (numRows - 1 - i);
                }
                if (!oddOrder || i == numRows - 1) {
                    j += 2 * i;
                }
                oddOrder = !oddOrder;
            }
        }
        return result;
    }
};