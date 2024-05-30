#include<iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter Number: " << endl;
    cin >> number;

    int i = 0;
    while(i <= number) {
        if(i % 2 == 0) {
            sum = sum + i;
        }
        i = i + 1;
    }

    cout << "Sum of even number: " << sum << endl;

    return 0;
}