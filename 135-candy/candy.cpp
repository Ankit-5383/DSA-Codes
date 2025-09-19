class Solution {
    int total(vector<int>& choco) {
        int sum = 0;
        for (int i : choco) {
            sum += i;
        }
        return sum;
    }

public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> choco(n, 1);

        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                choco[i] = choco[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                choco[i] = max(choco[i], choco[i + 1] + 1);
            }
        }
        return total(choco);
    }
};