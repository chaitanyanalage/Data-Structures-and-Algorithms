class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        int minVal = nums[0], minIdx = 0;
        int maxVal = nums[0], maxIdx = 0;

        for(int j = indexDifference; j < n; j++) {
            if(nums[j - indexDifference] < minVal) {
                minVal = nums[j - indexDifference];
                minIdx = j - indexDifference;
            }
            if(nums[j - indexDifference] > maxVal) {
                maxVal = nums[j - indexDifference];
                maxIdx = j - indexDifference;
            }

            if(abs(nums[j] - minVal) >= valueDifference) {
                return {minIdx, j};
            }
            if(abs(nums[j] - maxVal) >= valueDifference) {
                return {maxIdx, j};
            }
        }
        return  {-1, -1};
    }
};