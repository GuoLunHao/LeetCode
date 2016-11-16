#include <string>
using namespace std;

class Solution {
private:
    inline int max(int a, int b) {
        return a > b ? a : b;
    }
public:
    string convert(string s, int numRows) {
        string result;
        int T = max(2 * (numRows - 1), 1);
        for (size_t i = 0; i < numRows; i++) {
            size_t j = i;
            while (j < s.size()) {
                result += s[j];

                j += T - (2 * j) % T;
            }
        }
        return result;
    }
};