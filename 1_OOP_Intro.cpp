#include <iostream>
using namespace std;

// we can also create this in other file named 
// "Hero.cpp" and #include "Hero.cpp" to use it
class Hero{
    private:
    int health;

    // properties
    public:
    char name[100];
    int level;

    // getter & setter methods for accessing private data member "health"
    int getHealth(){
        return health;
    }
    void setHealth(int health){
        this->health = health;
    }

    // parametarized constructor
    // after making a parametarized constructor we can't use default constructor
    Hero(int health, int level){
        this->health = health;
        this->level = level;
    }

    // copy constructor
    // after making a custom copy constructor we can't use default copy constructor
    Hero(Hero &temp){
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
};

/*
// it is used to avoid structure padding
// #pragma pack(1)
class demo{
    // due to Structure Padding 
    // size of class will be 8
    char a;
    char b;
    int c;

    // size of class will be 12
    // char a;
    // int c;
    // char b;
};
*/

int main(){
    // copy constructor
    Hero h5(40, 6);
    Hero h6(h5);
    h6.print();

    // making object usign parametarized constructor
    // Hero h3(67, 59);
    // h3.print();

    // demo d1;
    // cout<<sizeof(d1)<<endl;

    /*
    // static allocation
    Hero h1;   
    // cout<<sizeof(h1)<<endl;
    h1.setHealth(13);
    cout<<h1.getHealth()<<endl;

    // dynamic allocation
    Hero *h2 = new Hero;

    h2->setHealth(32);
    cout<<"Dynamic \n"<<(*h2).level<<endl;
    cout<<h2->getHealth()<<endl;
    */

    return 0;
}

