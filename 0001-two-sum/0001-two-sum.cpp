class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        for(i = 0; i < nums.size() - 1; i++) {
            for(j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    goto jump;
                }
            }
        }
        jump:
        return{i,j};
    }
};