#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << "source: " << src << ", Destination: " << dest << endl;
    if(src == dest) {
        cout << "Reached home" << endl;
        return;
    }
    src++;
    reachHome(src, dest);
}

int main() {
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
}