#include <unordered_map>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> freqMap;
        int n = nums.size();
        
        for (int num : nums) {
            freqMap[num]++;
            if (freqMap[num] > n / 2) {
                return num;  
            }
        }
        
        return -1; // Should never reach here as per problem constraints
    }
};