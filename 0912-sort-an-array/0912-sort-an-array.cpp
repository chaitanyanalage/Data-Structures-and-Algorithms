class Solution {
public:
    void merge(vector<int>& nums, int start, int end) {
        int mid = start + (end - start)/2;
        int len1 = mid - start + 1;
        int len2 = end - mid;

        int* first = new int[len1];
        int* second = new int[len2];

        //copy values
        int mainArrayIndex = start;
        for(int i = 0; i < len1; i++) {
            first[i] = nums[mainArrayIndex++];
        } 
        for(int i = 0; i < len2; i++) {
            second[i] = nums[mainArrayIndex++];
        }

        //merge two sorted arrays
        int index1 = 0;
        int index2 = 0;
        mainArrayIndex = start;

        while(index1 < len1 && index2 < len2) {
            if(first[index1] < second[index2]) {
                nums[mainArrayIndex++] = first[index1++];
            }
            else {
                nums[mainArrayIndex++] = second[index2++];
            }
        }
        while(index1 < len1) {
            nums[mainArrayIndex++] = first[index1++];
        }
        while(index2 < len2) {
            nums[mainArrayIndex++] = second[index2++];
        }

        delete []first;
        delete []second;
    }
    void mergeSort(vector<int>& nums, int start, int end) {
        //base case
        if(start >= end) {
            return;
        }

        int mid = start + (end - start)/2;

        //left part
        mergeSort(nums, start, mid);

        //right part
        mergeSort(nums, mid + 1, end);

        //merge
        merge(nums, start, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        mergeSort(nums, start, end);

        return nums;
    }
};