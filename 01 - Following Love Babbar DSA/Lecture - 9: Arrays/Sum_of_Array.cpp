#include<iostream>
using namespace std;

int getSumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    cout << "Sum of Array: " << getSumOfArray(arr, 10) << endl;
}