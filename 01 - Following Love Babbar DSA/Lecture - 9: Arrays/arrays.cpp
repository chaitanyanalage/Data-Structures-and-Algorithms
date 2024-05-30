#include<iostream>
using namespace std;

int main() {
    int arr[10] = {0}; //Initalizing array with zero

    for(int i = 0; i < 10; i++) {
        cout << arr [i] << " ";
    }
    cout << endl;

    cout << arr << endl; //returns address of first element
    cout << &arr[0] << endl;
    cout << arr[1] << endl;
}