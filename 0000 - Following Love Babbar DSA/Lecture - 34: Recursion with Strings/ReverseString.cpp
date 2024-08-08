#include<iostream>
using namespace std;

void reverse(string& str, int i) {
    int n = str.size();
    cout << "Call recived for " << str << endl;
    //base case
    if(i > n-i-1)
        return;
    swap(str[i], str[n-i-1]);
    i++;
 
    //Recursive call
    reverse(str, i);
} 

int main() {

    string name = "babbar";
    cout << endl;
    reverse(name, 0);
    cout << endl;
    cout << name << endl;

    return 0;
}