class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long result = 1;
        long long temp = 1;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i - 1] - prices[i] == 1)
                temp++;
            else
                temp = 1;
            result += temp;
        }
        return result;
    }
};