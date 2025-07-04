class Solution {
    // Helper to shift a character forward in the alphabet
    char shiftChar(char c, int steps) {
        return 'a' + (c - 'a' + steps) % 26;
    }

public:
    char kthCharacter(long long k, vector<int>& operations) {
        vector<long long> size;
        size.push_back(1); // Start with "a"

        long long currentLength = 1;

        // Build the length history only until we reach or pass k
        for (int op : operations) {
            currentLength = (op == 0) ? currentLength * 2 : currentLength * 2;
            size.push_back(currentLength);
            if (currentLength >= k) break;
        }

        char result = 'a';
        int shiftCount = 0;

        // Trace back from last operation to the start
        for (int i = size.size() - 1; i > 0; --i) {
            long long half = size[i - 1];
            int op = operations[i - 1];

            if (op == 0) {
                // Duplicated: "s + s"
                if (k > half) {
                    k -= half;
                }
            } else {
                // Transformed: "s + next(s)"
                if (k > half) {
                    k -= half;
                    ++shiftCount;
                }
            }
        }

        return shiftChar(result, shiftCount);
    }
};
