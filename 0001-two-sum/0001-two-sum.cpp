class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 , j = i + 1;
        for(i = 0; i < nums.size() - 1; i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    goto jump;
                }
            }
        }
        jump:

        return {i,j};
    }
};