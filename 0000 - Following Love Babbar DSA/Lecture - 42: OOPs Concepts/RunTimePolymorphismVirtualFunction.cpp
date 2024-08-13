#include<iostream>
using namespace std;

//Run Time Polymorphism
//Virtual Function

class Parent {
public:
    void getInfo() {
        cout << "Parent class" << endl;
    }

    void hello() { 
        cout << "hello from parent" << endl;
    }
};

class Child : public Parent {
public:
    void getInfo() {
        cout << "Child class" << endl;
    }

    void hello() {
        cout << "hello from child" << endl;
    }
};

int main() {
    Child c1;
    c1.hello();

    Parent p1;
    p1.hello();


    return 0;
}