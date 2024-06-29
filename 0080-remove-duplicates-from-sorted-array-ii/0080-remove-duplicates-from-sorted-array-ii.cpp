class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
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