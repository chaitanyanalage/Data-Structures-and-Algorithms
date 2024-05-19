#include<iostream>
using namespace std;

int main() {
    int number, factorial = 1;

    cout << "Enter Number: " << endl;
    cin >> number;

    if(number == 0) {
        cout << "1" << endl;
        return 0;
    }
    else {
        for(int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
    }

    cout << "Factorial: " << factorial << endl;
    
}