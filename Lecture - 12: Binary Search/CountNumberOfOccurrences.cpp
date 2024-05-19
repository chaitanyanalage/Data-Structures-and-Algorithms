#include<iostream>
#include<vector>
using namespace std;

int firstOcc(int arr[], int n, int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int low = -1;

    while(start <= end) {
        if(arr[mid] == n) {
            low = mid;
            end = mid - 1;
        }
        else if(arr[mid] < n) {
            start = mid + 1;
        }
        else if(arr[mid] > n) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return low;
}

int lastOcc(int arr[], int n, int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int high = -1;

    while(start <= end) {
        if(arr[mid] == n) {
            high = mid;
            start = mid + 1;
        }
        else if(arr[mid] < n) {
            start = mid + 1;
        }
        else if(arr[mid] > n) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return high;
}

int main() {
    int arr[10] = {1,1,1,1,1,2,3,4,5,6};
    int n = 1;
    int ans;

    ans = lastOcc(arr, n, 10) - firstOcc(arr, n, 10) + 1;

    cout << n << " occurs " << ans << " times." << endl;

    return 1;
}