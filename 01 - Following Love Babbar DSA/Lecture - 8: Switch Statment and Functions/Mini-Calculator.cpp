#include<iostream>
using namespace std;

int main() {
    int  a, b;
    cout << "Enter value of a: " << endl;
    cin >> a;
    cout << "Enter value of b: " << endl;
    cin >> b;
    char op;
    cout << "Enter operation you want to perform: " << endl;
    cin >> op;

    switch(op) {
        case '+':   cout << (a+b) << endl;
            break;
        case '-':   cout << (a-b) << endl;
            break;
        case '*':   cout << (a*b) << endl;
            break;
        case '/':   cout << (a/b) << endl;
            break;
        default:    cout << "Please enter a valid operation." << endl;
    }
    return 0;
}