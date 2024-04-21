#include<iostream>
using namespace std;

void selectionSort(int* arr, int size, int start) {

    //base case
    if(start == size)
        return;
    
    for(int i=1; i<size; i++) {
        if(arr[start] > arr[i]){
            swap(arr[start], arr[i]);
            break;
        }
    }

    selectionSort(arr, size, start++);
}

int main() {

    int arr[5] = {5,2,3,4,5};
    int size = 5;

    selectionSort(arr, size, 0);

    for(int i=0; i<size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}