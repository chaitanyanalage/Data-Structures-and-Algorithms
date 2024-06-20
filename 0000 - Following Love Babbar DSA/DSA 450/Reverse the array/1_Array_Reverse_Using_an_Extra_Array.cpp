#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int reversearr[size];

    for(int i = 0; i < size; i++) {
        reversearr[i] = arr[size - i - 1]; 
    }

    for(int i = 0; i < size; i++) {
        cout << reversearr[i] << " ";
    } cout << endl;
    
}

int main() {
    int orignalarr[] = {1,2,3,4,5};
    int size = sizeof(orignalarr) / sizeof(orignalarr[0]);

    reverseArray(orignalarr, size);

    return 0;
}