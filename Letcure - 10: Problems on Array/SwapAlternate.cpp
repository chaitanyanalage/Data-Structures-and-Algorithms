#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size; i = i + 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    cout << "Array after Swap: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapAlternate(arr, 10);

    cout << "Array after Swap: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}