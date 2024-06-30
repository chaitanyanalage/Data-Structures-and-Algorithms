class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        if(nums.size() == 1) {
            return;
        }

        k = k % nums.size(); // Handle cases where k is greater than the size of the array


        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};