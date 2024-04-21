#include<iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter Number: " << endl;
    cin >> number;

    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            cout << "Not Prime" << endl;
            return 0;
        }
    }

    cout << "Prime" << endl;
}