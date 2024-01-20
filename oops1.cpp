#include<iostream>
// #include "hero.cpp" aise import kar sakte hai 
// shallow and deep copy samjh aagya but likha nhi maine
using namespace std;

class hero {

   
    //properties
    int value[100];
    int health;
    char level;

    public:
    hero(){
        cout << "constructor called" << endl;
    }

    //parameterised constructor
    hero (int health, char level) {
        cout << "this -> " << this << endl;
        this -> health = health;  // this se object ka health access hoga and ussi mein paramertersided constructor ki value dal jaaygi
        this -> level = level;
    }
    
    //copy constructor
    hero (hero &temp){
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print () {
        cout << "health " << this -> health << endl;
         cout << "level " << this -> level << endl;  
    }

    int getHealth() {
        return health;

    }

    char getLevel() {
        return level;

    }

    void setHealth(int h) {
        health = h;

    }

    void setLevel(char ch) {
        level = ch;
    }

};


int main()
{
    hero suresh ( 70 , 'c');
    suresh.print ();
 
    // copy constructor
    hero R(suresh);
    R.print();





    /*
    
    hero ramesh(10);
    hero * abc = new hero;
    //static allocation
    hero a;

    //dynamic
    hero* b = new hero;
    cout << "level is " << (*b). getLevel() << endl;
    cout << "level is " << b-> getLevel() << endl; */


    /*//creation of object 
    hero ramesh;
    //ramesh.health = 70;
    //ramesh.level = 'a';
 
    cout << " Ramesh health is " << ramesh.getHealth() << endl; */
    return 0;

}
