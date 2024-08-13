#include<iostream>
using namespace std;

class Shape { //abstract class
    virtual void draw() = 0; //pure birtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "drawing circle" << endl;
    }
};

int main() {
    Circle c1;
    c1.draw();

    return 0;
}