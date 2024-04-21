#include<iostream>
using namespace std;

int main() {
    float fahrenheit, celsius = 0;

    cout << "Enter Fahrenheit: " << endl;
    cin >> fahrenheit;

    celsius = (5.0/9) * (fahrenheit - 32);

    cout << "Celsius: " << celsius << endl;

    return 0;
}