#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

};

class Student : public Person {
    //name, age, rollno
public:
    int rollno;

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
    
    GradStudent s1;
    s1.name = "Tony Stark";
    s1.researchArea = "Algotithms";
    cout << s1.name << endl;
    cout << s1.researchArea << endl;


    return 0;
}