#include<iostream>
using namespace std;

//Compile Time Polymorphism
//Function overloading

class Print {
public:
    void show(int x) {
        cout << "int : " << x << endl;
    }

    void show(char ch) {
        cout << "int : " << ch << endl;
    }
};

int main() {
    Print p1;
    p1.show(3);

    Print p2;
    p2.show('C');


    return 0;
}