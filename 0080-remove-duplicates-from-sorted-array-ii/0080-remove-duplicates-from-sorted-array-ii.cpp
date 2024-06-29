class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) {
            return 0;
        } 
        
        int i = 0;
        for(auto xy : nums) {
            if(i==0 || i==1 || xy != nums[i-2]) {
                nums[i] = xy;
                i++;
            }
        }
        return i;
    }
};