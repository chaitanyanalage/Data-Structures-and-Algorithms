#include<iostream>
using namespace std;

void fun() {
    static int x = 0; // init statment - 1 run
    cout << "x: " << x << endl;
    x++;
}

class A {
public: 
    int x;

    void incX() {
        x = x + 1;
    }
};

class ABC {
public:
    ABC() {
        cout << "constructor" << endl;
    }
    ~ABC() {
        cout << "destructor" << endl;
    }
};

int main() {
    fun();
    fun();
    fun();

    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;

    cout << obj1.x << endl;
    cout << obj2.x << endl;

    if(true) {
        static ABC obj;
    }

    cout << "end of main funx" << endl;

    return 0;
}