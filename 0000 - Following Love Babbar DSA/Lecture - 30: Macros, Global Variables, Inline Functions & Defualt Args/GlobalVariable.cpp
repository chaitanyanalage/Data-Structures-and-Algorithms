#include<iostream>
using namespace std;

//global variable
int score = 15;

void b(int& i) {
    cout << i << endl;
    cout << score << endl;
    score++;
}

void a(int& i) {
    cout << i << endl;
    b(i);
    cout << score << endl;
    score++;
}

int main() {
    int i = 5;
    a(i);
    b(i);
    cout << score << endl;
}