#include<iostream>
using namespace std;

void fun(int n) {
    cout << "Value of copy in fun() before changing: " << n << endl;
    n = n + 10;
    cout << "Value of copy in fun() after changing: " << n << endl;
}

int main() {
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    cout << "Value of real n before function call:  " << n << endl;
    fun(n);
    cout << "Value of real n after funtion call: " << n << endl;

    return 0;
}