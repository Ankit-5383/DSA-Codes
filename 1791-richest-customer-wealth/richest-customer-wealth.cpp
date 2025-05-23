class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int max_profit = 0;
        int profit = 0;
        int col = accounts[0].size();
        int count = 0;
        for (const auto& row : accounts) {
            for (int val : row) {
                count++;
                profit += val;
                if (count == col) {
                    count = 0;
                    max_profit = max(profit, max_profit);
                    profit = 0;
                }
            }
        }
        return max_profit;
    }
};