#include<iostream>
using namespace std;

int main() {
    float PrincipalAmount, RateOfInterest, Time, SimpleIntrest;

    cout << "Enter Principal Amount: " << endl;
    cin >> PrincipalAmount;

    cout << "Enter Rate of Interest: " << endl;
    cin >> RateOfInterest;

    cout << "Enter Time: " << endl;
    cin >> Time;

    SimpleIntrest = (PrincipalAmount * RateOfInterest * Time) / 100;

    cout << "Simple Interest is " << SimpleIntrest << endl;
}