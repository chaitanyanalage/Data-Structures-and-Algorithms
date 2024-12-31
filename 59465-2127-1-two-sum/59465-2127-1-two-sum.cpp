class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;

        for(int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if(prevMap.find(diff) != prevMap.end()) {
                return{prevMap[diff], i };
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};