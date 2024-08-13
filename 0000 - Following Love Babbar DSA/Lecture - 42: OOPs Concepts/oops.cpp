#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
double salary;

public:
    //non -parameterized constructor
    Teacher() {
        dept = "Computer Science";
    }

    //parameterized constructor
    Teacher(string name, string d, string s, double sal) {
        this->name = name;
        this->dept = d;
        this->subject = s;
        this->salary = sal;
    }

    //copy constructor
    Teacher(Teacher &orgObj) { //pass by reference
        cout  << "I am custom copy constructor..." << endl;
        this->name = orgObj.name; 
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    //properties / attributes
    string name;
    string dept;
    string subject;

    //methods / member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "department : " << dept << endl;
        cout << "subject : " << subject << endl;
        cout << "salary : " << salary << endl;

    }

    //setter
    void setSalary(int s) {
        salary = s;
    }
    //getter
    double getSalary() {
        return salary;
    }
};

class Account {
private:
    double balance;
    string password; //data hiding

public:
    string accountId;
    string username;

};


int main() {

    //encapsulation
    Teacher t1;
    Teacher t2;
    t1.name = "Chaitanya";
    t1.subject = "C++";
    t1.dept = "Computer";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    cout << t1.dept << endl;

    cout << endl;

    //constructor
    Teacher t3("Abhishek", "Computer Science", "C++", 25000);
    t3.getInfo();

    cout << endl;

    //copy constructor
    Teacher t4(t1); //defult copy constructor invoked
    t4.getInfo();


    return 0;
}