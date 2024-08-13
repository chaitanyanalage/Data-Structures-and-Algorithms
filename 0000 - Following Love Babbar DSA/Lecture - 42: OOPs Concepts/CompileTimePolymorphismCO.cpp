#include<iostream>
using namespace std;

//Compile Time Polymorphism
//Constructor overloading

class Student {
public:
    string name;

    Student() {
        cout << "non-parameterized constructor" << endl;
    }

    Student (string name) {
        this->name = name;
        cout << "parameteried constructor" << endl;
    }
};

int main() {
    Student s1("Chaitanya");


    return 0;
}