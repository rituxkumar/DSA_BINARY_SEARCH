class Solution {
public:
    int numSub(string s) {
        int result = 0;
        const int M = 1000000007;

        int countOf1 = 0;

        for (char ch : s) {
            if (ch == '1') {
                countOf1++;
                result = (result + countOf1) % M;

            } else {
                countOf1 = 0;
            }
        }
        return result;
    }
};