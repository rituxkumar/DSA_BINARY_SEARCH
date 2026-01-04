class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.length();
        int i = 0; // for left collision
        while (i < n && directions[i] == 'L') {
            i++;
        }

        int j = n - 1; // for right collision
        while (j >= 0 && directions[j] == 'R') {
            j--;
        }
        int collision = 0;
        while (i <= j) {
            if (directions[i] != 'S') {
                collision++;
            }
            i++;
        }

        return collision;
    }
};