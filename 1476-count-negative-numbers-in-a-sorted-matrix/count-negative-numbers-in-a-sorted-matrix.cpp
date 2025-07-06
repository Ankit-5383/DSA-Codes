class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c = grid[0].size();
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < (c + 1) / 2; j++) {
                int left = grid[i][j];
                int right = grid[i][c - j - 1];

                if (j == c - j - 1) {
                    if (left < 0) count++;
                } else {
                    if (left < 0) count++;
                    if (right < 0) count++;
                }
            }
        }
        return count;
    }
};