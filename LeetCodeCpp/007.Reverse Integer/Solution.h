class Solution {
public:
    int reverse(int x) {
        int result = 0;
        bool isPositive = x > 0;
        if (x == INT_MIN)
        {
            return 0;
        }
        x = x > 0 ? x : -x;
        while(x != 0)
        {
            if (result >(INT_MAX / 10))
            {
                result = 0;
                break;
            }
            result *= 10;
            result += x % 10;
            x /= 10;
        }
        if (!isPositive)
        {
            result *= -1;
        }
        return result;
    }
};