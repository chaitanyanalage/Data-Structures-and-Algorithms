#include<iostream>
#include<vector> // Add this line to include the vector definition
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        }
        else {
            temp.push_back(arr[right++]);
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left++]);
    }
    while(right <= high) {
        temp.push_back(arr[right++]);
    }

    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mS(vector<int> &arr, int low, int high) {
    if(low >= high) // Change base condition to prevent infinite recursion
        return;

    int mid = low + (high - low) / 2; // This prevents overflow

    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high); 
}

int main() {
    vector<int> arr = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mS(arr, 0, arr.size() - 1); // Change the second parameter to 'arr.size() - 1'

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "; // Changed endl to " " for better display
    }
    cout << endl; // New line after displaying the sorted array
}
