#include<iostream>
using namespace std;

void selectionSort(int* arr, int size) {
    for(int i = 0; i < (size-1); i++) {
        int minIndex = i;
        for(int j = i+1; j<size; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[6] = {6,5,4,3,2,1};
    int size = 5;

    selectionSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}