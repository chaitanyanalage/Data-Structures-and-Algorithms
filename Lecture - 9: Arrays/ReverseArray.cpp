#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    cout << "Array before reversing: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, 10);
    cout << "Array after reversing: " << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}