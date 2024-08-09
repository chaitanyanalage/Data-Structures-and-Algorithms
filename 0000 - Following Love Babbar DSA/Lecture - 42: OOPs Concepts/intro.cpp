#include<iostream>
//#include "hero.cpp"
using namespace std;

    class Hero {

        //properties
        private:
        int health;

        public:
        char *name;
        char level;

        Hero() {
            cout << endl;
            cout << "Simple counstructor called" << endl;
            name = new char[100];
            cout << endl;
        }

        //Paramerterised Constructor
        Hero(int health) {
            //cout << "this -> " << this << endl;
            this -> health = health;

            cout << "health: " << health << endl;
        }

        Hero(int health, char level) {
            this -> level = level;
            this -> health = health;    
        }

        //copy constructor
        Hero(Hero& temp) {
            char *ch = new char[strlen(temp.name) + 1];
            strcpy(ch, temp.name);
            this->name = ch;

            cout << "Copy constructor called " << endl; 
            this->health = temp.health;
            this->level = temp.level;
        }

        void print() {
            cout << endl;
            cout << "Name: " << this->name << endl;
            cout << "Health: " << this->health << endl;
            cout << "Level: " << this->level << endl;
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

        void setName(char name[]) {
            strcpy(this->name,name);
        }

        ~Hero() {
            cout << "Destructor called" << endl;
        }

    };

    int main() {

        //Static
        Hero a;

        //Dynamic
        Hero *b = new Hero();
        //For dymanic  we need to call destructor manually
        delete b;



        /*
        Hero hero1;
        hero1.setHealth(12);
        hero1.setLevel('D');
        char name[7] = "Babbar";
        hero1.setName(name);

        hero1.print();

        //use defult copy constructor
        Hero hero2(hero1);
        // Hero hero2 = hero1;
        hero2.print();

        hero1.name[0] = 'G';
        hero1.print();

        hero2.print();

        hero1 = hero2;

        hero1.print();
        hero2.print();
        */

        /*
        Hero suresh(70, 'C');
        // suresh.setHealth(70);
        // suresh.setLevel('C');
        suresh.print();

        //Copy constructor
        Hero ritesh(suresh);
        // ritesh.health = suresh.health;
        // ritesh.level = suresh.level;
        ritesh.print();
        */

        
        /*
        //object crerated statically
        Hero ramesh(10);
        cout << "Address of ramesh -> "  << &ramesh << endl;
        ramesh.print();

        //dynamically
        Hero *h = new Hero();
        h -> print();

        //deallocate memory
        delete h;

        Hero temp(22, 'B');
        temp.print();
        */

        /*
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
        */
    }