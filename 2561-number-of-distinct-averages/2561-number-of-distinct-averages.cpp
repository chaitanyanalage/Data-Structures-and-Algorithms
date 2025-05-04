class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<double> uniqueAvg;

        for(int left = 0, right = nums.size() - 1; left < right; left++, right--) {
            double avg = (nums[left] + nums[right]) / 2.0;
            uniqueAvg.insert(avg);
        }

        return uniqueAvg.size();
    }
};