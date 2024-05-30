#include<iostream>
#include<map>
using namespace std;

int main() {
     map<int, string> m;

     m[1] = "babbar";
     m[3] = "love";
     m[2] = "kumar";

     m.insert( {5,"bheem"});

    cout << "before erase-> " << endl;
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    } cout << endl;

    cout << "finding 3-> " << m.count(3) << endl;

    m.erase(3);

    cout << "after erase-> " << endl;
    for(auto i:m) {
        cout << i.first << " " << i.second << endl;
    } cout << endl;

    auto it = m.find(1);

    for(auto i = it; i != m.end(); i++) {
        cout << (*i).first << endl;
    }
    
}