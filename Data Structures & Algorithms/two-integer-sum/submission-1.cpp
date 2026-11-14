class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            auto it = numMap.find(complement);
            if (it != numMap.end()) return {it->second, i};

            numMap[nums[i]] = i;
        }
    return {};
    }
};