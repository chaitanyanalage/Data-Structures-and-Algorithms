class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) {
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        int currentSequence = 1;
        int longestSequence = 0;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                if(nums[i] == nums[i - 1] + 1) {
                    currentSequence++;
                }
                else {
                    longestSequence = max(longestSequence, currentSequence);
                    currentSequence = 1;
                }
            }
        }
        return max(longestSequence, currentSequence);;
    }
};