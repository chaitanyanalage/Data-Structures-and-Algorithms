#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Person() {
    //     cout << "parent constructor..." << endl;
    // }

    ~Person() {
        cout << "parent destructor..." << endl;
    }
};

class Student : public Person {
    //name, age, rollno
public:
    int rollno;

    // Student() {
    //     cout << "child constructor..." << endl;
    // }

    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll no: " << rollno << endl;
    }

    ~Student() {
        cout << "child destructor..." << endl;
    }

};

class GradStudent : public Student {
public:
    string researchArea;
};

int main() {
    Student s1("Chaitanya", 21, 23);
    s1.getInfo();


    return 0;
}