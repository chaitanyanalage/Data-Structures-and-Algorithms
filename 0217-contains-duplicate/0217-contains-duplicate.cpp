class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num = 0; num < nums.size(); num++) {
            if(seen.count(nums[num]) > 0) {
                return true;
            }
            seen.insert(nums[num]);
        }
        return false;
    }
};