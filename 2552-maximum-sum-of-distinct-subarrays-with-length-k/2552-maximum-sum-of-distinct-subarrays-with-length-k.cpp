class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long sum = 0;
        long long max_sum = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            sum += nums[right];

            if(right - left + 1 > k) {
                freq[nums[left]]--;
                sum -= nums[left];
                if(freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                left++;
            }

            if(right - left + 1 == k && freq.size() == k) {
                max_sum = max(max_sum, sum);
            }
        }
        return max_sum;
    }
};