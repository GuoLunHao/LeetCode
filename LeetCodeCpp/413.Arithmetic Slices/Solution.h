class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int arithmeticSlicesNumber = 0;

        if (A.size() >= 3) {

            int difference = A[1] - A[0];
            int length = 2;

            for (size_t i = 2; i < A.size(); i++) {
                if (A[i] - A[i-1] == difference) {
                    length++;
                }
                if (A[i] - A[i-1] != difference || (i == A.size() - 1)) {
                    arithmeticSlicesNumber += calculateArithmetic(length);
                    length = 2;
                    difference = A[i] - A[i-1];
                }
            }
        }

        return arithmeticSlicesNumber;
    }
private:
    int calculateArithmetic(int length) {
        int result = 0;
        for (size_t i = 3; i <= length; i++) {
            result += length - i + 1;
        }
        return result;
    } 
};