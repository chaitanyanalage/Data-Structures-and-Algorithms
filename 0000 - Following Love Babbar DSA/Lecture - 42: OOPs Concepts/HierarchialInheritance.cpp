#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};

class TA : public Student, public Teacher {
public:
    string researchArea;
};

int main() {
    Teacher t1;
    t1.name = "Chaitanya";
    t1.subject = "Computer Science";
    cout << t1.name << endl;
    cout << t1.subject << endl;

    cout << endl;

    Student s1;
    s1.name = "Abhishek";
    s1.rollno = 23;
    cout << s1.name << endl;
    cout << s1.rollno << endl;


    return 0;
}