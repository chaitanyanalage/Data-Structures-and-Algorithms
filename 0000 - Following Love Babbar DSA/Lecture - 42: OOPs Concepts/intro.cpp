#include<iostream>
//#include "hero.cpp"
using namespace std;

    class Hero {

        //properties
        private:
        int health;

        public:
        char level;

        void print() {
            cout << level << endl;
        }

        //getter
        int getHealth() {
            return health;
        }

        char getLevel() {
            return level;
        }

        //setter
        void setHealth(int h) {
            health = h;
        }

        void setLevel(char ch) {
            level = ch;
        }


    };

    int main() {

        //static allocation
        Hero a;

        a.setLevel('A');
        a.setHealth(100);

        cout << "level is " << a.level << endl;
        cout <<"health is " << a.getHealth() << endl; 

        //dynamically alloaction
        Hero *b = new Hero;

        b->setLevel('B');
        b->setHealth(80);

        cout << "level is " << (*b).level << endl;
        cout <<"health is " << (*b).getHealth() << endl; 

        cout << "level is " << b->level << endl;
        cout <<"health is " << b->getHealth() << endl; 



        //creation of object
        // Hero ramesh;

        // cout << "Ramesh health is " << ramesh.getHealth() << endl;
 
        // ramesh.setHealth(70);
        // ramesh.level = 'A';

        // cout << "health is: " << ramesh.getHealth() << endl;
        // cout << "level is: " << ramesh.level << endl;

        // cout << "Size if Ramesh is: " << sizeof(ramesh) << endl;;


        // return 0;
    }