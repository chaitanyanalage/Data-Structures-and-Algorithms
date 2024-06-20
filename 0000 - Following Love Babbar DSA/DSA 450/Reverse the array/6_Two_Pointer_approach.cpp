#include<iostream>
using namespace std;

void reversearr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printarr(int arr[], int size) {    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl; 
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before reverse : ";
    printarr(arr, size);

    reversearr(arr, size);

    cout << "Array after reverse : ";
    printarr(arr, size);

    return 0;

}