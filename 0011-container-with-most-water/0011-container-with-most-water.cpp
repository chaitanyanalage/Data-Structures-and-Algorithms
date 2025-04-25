class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() - 1;
        int left = 0;
        int current_capacity = 0;
        int final_capacity = 0;

        while(left < right) {
            current_capacity = (right - left) * min(height[left], height[right]);
            final_capacity = max(final_capacity, current_capacity);
            
            if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return final_capacity;
    }
};