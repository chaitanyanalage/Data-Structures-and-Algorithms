#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Number: " << endl;
    cin >> number;

    int i = 2;
    while(i < number) {
        if(number % i == 0) {
            cout << "Non-Prime number" << endl;
            return 0;
        }
        i = i + 1;
    }

    cout << "Prime number" << endl;
    return 0;
}