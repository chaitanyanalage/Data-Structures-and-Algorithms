#include<iostream>
using namespace std;

//Compile Time Polymorphism
//Operator overloading

class Print {
public:
    void show(int x) {
        int y = x;
        cout << y << endl;
    }

    void show(string str1) {
        string str2 = str1;
        cout << str2 << endl;
    }
};

int main() {
    Print p1;
    p1.show(3);

    Print p2;
    p2.show("Chaitanya");


    return 0;
}