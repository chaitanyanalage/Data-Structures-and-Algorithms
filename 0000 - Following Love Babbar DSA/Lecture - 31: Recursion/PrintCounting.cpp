#include<iostream>
using namespace std;

void printcount(int n) {
   //base case
   if(n == 0) {
    return;
   }

    //tell recursion
    cout << n << " ";
    printcount(n-1);
}

int main() {
    int n = 5;

    printcount(n);

    return 0;
}