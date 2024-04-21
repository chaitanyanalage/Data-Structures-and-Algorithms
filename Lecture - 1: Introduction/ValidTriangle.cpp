#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter triangle 1st side: " << endl;
    cin >> a;

    cout << "Enter triangle 2nd side: " << endl;
    cin >> b;

    cout << "Enter triangle 3rd side: " << endl;
    cin >>  c;

    if((a + b > c) && (b + c > a) && (c + a > b)) {
        cout << "Valid Triangle" << endl;
    }
    else {
        cout << "Invalid Triangle" << endl;
    }

}