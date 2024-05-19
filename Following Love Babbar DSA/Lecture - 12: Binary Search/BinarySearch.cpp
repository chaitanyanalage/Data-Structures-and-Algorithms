#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else { //key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {

    int even[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int evenIndex = binarySearch(even, 6, 8);

    cout << evenIndex << endl;

    return 0;
}