class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(begin(capacity), end(capacity), greater<int>());

        int totalApple = accumulate(begin(apple), end(apple), 0);
        int totalBox = 0;
        int i = 0;
        while (totalApple > 0) {
            totalApple = totalApple - capacity[i];
            totalBox++;
            i++;
        }
        return totalBox;
    }
};