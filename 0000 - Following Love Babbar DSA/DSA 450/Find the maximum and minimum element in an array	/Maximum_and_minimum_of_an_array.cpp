#include<iostream>
using namespace std;
int setmin(int arr[], int size) {
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int setmax(int arr[], int size) {
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element is: " << setmin(arr, size) << endl;
    cout << "Maximum element is: " << setmax(arr, size) << endl;
}