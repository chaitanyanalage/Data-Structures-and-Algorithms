class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int current_sum = 0;
        int left = 0;
        int right = numbers.size() - 1;

        while(left < right) {
            current_sum = numbers[left] + numbers[right];

            if(current_sum == target) {
                return{left + 1, right + 1};
            } 
            else if(current_sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};