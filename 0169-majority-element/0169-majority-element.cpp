class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        if(nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        int n = nums.size();

        return nums[n/2];
    }
};