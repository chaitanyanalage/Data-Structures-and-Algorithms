#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1,3,4,5,6,7,8,9,0,2};

    cout << "address of first memory location: " << arr << endl;
    cout << "address of first memory location: " << &arr[0] <<endl;

    cout << "value at first location: " << arr[0] <<endl;
    cout << "value at first location: " << *arr <<endl;
    cout << "value at second location: " << *arr + 1 <<endl;
    cout << "value at second location: " << *(arr + 1) <<endl;
    cout << "value at second location: " << *(arr) + 1 <<endl;
    cout << "value at first location: " << 2[arr] <<endl;
    cout << "value at first location: " << *(2 + arr) <<endl;


    cout << "Size of array: " << sizeof(arr) << endl;
    int *ptr = &arr[0];
    cout << "Size of pointer: " << sizeof(ptr) << endl;
    cout << "Size of arr[0]: " << sizeof(*ptr) << endl;
    cout << "Size of pointer: " << sizeof(&ptr) << endl;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    cout << "Value of &ptr: " << &ptr << endl;
    cout << "Value of ptr: " << ptr + 1 << endl;


    //It will throw error
    // arr = arr + 1;
    // cout << arr;



}