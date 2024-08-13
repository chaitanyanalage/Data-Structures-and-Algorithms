#include<iostream>
using namespace std;

//Run Time Polymorphism
//Function Overriding

class Parent {
public:
    void getInfo() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void getInfo() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child c1;
    c1.getInfo();


    return 0;
}