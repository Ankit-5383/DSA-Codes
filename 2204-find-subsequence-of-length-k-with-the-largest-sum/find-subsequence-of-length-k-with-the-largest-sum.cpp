class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> valIdx;

        // Step 1: Pair each value with its original index
        for (int i = 0; i < n; ++i) {
            valIdx.emplace_back(nums[i], i);
        }

        // Step 2: Sort by value in descending order to find top k
        sort(valIdx.begin(), valIdx.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });

        // Step 3: Retain only top k elements
        valIdx.resize(k);

        // Step 4: Sort the selected elements by their original index to maintain subsequence order
        sort(valIdx.begin(), valIdx.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        // Step 5: Extract and return only the values
        vector<int> result;
        for (auto& p : valIdx) {
            result.push_back(p.first);
        }

        return result;
    }
};