#include<iostream>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name; //string class handles deep copy
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj) {
        this->name = obj.name; //string class handles deep copy
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    //destructor
    ~Student() {
        cout << "Hi, I'm destructor" << endl;
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Chaitanya", 4);
    s1.getInfo();

    Student s2(s1);
    s2.getInfo();
    s2.name = "Neha"; 
    *(s2.cgpaPtr) = 4.5;
    s2.getInfo();
    s1.getInfo();  
    return 0;
}