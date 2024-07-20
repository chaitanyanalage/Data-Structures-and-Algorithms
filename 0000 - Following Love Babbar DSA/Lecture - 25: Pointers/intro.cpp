#include<iostream>
using namespace std;

int main() {
    int num = 5;
    cout << num << endl;
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;
    (*ptr)++;
    int a = *ptr;
    a++;

    cout << "num: " << num << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "a: " << a << endl;
    cout << "num: " << num << endl;

}