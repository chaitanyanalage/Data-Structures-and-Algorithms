#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr + size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;

}