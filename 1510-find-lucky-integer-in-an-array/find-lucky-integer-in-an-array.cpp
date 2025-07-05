class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res = -1;  
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto& [num, count] : freq) {
            if (count == num && num > res) {
                res = num;
            }
        }

        return res;
    }
};