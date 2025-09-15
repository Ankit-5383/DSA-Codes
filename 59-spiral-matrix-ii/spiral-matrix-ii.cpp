class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int num = 1;
        
        while (top <= bottom && left <= right) {
            
            for (int j = left; j <= right; j++) {
                res[top][j] = num++;
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                res[i][right] = num++;
            }
            right--;
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    res[bottom][j] = num++;
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    res[i][left] = num++;
                }
                left++;
            }
        }
        return res;
    }
};