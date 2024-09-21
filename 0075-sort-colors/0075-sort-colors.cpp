class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        int i = 0;

        while(i < nums.size()) {
            if(nums[i] == 0) {
                zeroCount++;
            }
            else if(nums[i] == 1) {
                oneCount++;
            }
            else if(nums[i] == 2) {
                twoCount++;
            }
            i++;
        }
        
        i = 0;
        while(i < nums.size()) {
            if(zeroCount != 0) {
                nums[i] = 0;
                zeroCount--;
            }
            else if(oneCount !=0) {
                nums[i] = 1;
                oneCount--;
            }
            else if(twoCount != 0) {
                nums[i] = 2;
                twoCount--;
            }
            i++;
        }
    }
};