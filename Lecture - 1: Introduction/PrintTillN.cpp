#include<iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter number: " << endl;
    cin >> number;

    for(int i = 1; i <= number; i++) {
        cout << i << endl;
    }
}