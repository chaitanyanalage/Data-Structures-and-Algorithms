#include<iostream>
using namespace std;

int main() {
    int money;
    cout << "Enter number: " << endl;
    cin >> money;

    switch(1) {
        case 1:
            cout << "No of 100 Rupee Notes: " << money/100 << endl;
            money = money % 100;
        case 2:
            cout << "No of 50 Rupee Notes: " << money/50 << endl;
            money = money % 50;
        case 3:
            cout << "No of 20 Rupee Notes: " << money/20 << endl;
            money = money % 20;
        case 4:
            cout << "No of 1 Rupee Notes: " << money/1 << endl;
            money = money % 1; //unnecassary
    }
    return 0;
}