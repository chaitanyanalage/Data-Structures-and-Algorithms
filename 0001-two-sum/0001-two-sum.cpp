class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int current_sum = 0;

        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                current_sum = nums[i] + nums[j];
                if(current_sum == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};