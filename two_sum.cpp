class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int, int> map; // Stores (number, index)
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (map.find(complement) != map.end()) {
            return {map[complement], i}; // Return stored index and current index
        }
        map[nums[i]] = i; // Store current number and its index
    }
    
    return {}; 
    }
};

