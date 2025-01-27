#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Create an empty hash map
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate complementary value
            // Check if complement is already present
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return indices if found
            }
            // Store current number's index in hashmap
            numMap[nums[i]] = i;
        }
        return {}; // In case no solution is found (shouldn't happen as per problem statement)
    }
};
