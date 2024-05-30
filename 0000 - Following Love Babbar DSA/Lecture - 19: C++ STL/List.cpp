#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> n(5,100);
    cout  << "Printing n: ";
    for(int i:n) {
        cout << i << " ";
    } cout << endl;


    list<int> l;

    l.push_back(1);
    l.push_front(2);

    cout <<"before erase-> ";
    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    l.erase(l.begin());
    cout <<"after erase-> ";
    for(int i:l) {
        cout << i << " ";
    } cout << endl;

    cout << "size of list-> " << l.size() << endl;
}