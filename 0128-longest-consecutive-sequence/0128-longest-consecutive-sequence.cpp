class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for(int num: numSet) {
            if(!numSet.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while(numSet.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }

                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};