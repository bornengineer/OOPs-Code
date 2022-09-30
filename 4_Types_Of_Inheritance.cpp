#include<iostream>
using namespace std;

// 1. single inheritance
// just normal inheritance
/*
class Human{
    int health;
    public:
    void setHealth(int health) { 
        // this->health = health;
        // or
        (*this).health = health;
    }
    int getHealth(){return this->health;}
};

class Male : public Human{
    int age;
    public:
    int getAge(){return this->age;}
};*/

// 2. MultiLevel inheritance
// more than one relationship in vertical order of
/*
class Animal{
    int age;
    protected: 
    int halwa;
    void setAge(int age){this->age = age;}
    int getAge(){return this->age;}
};
class Dog: public Animal{
    int lifeSpan;
    protected:
    void printAge(){cout<<"Age accessed "<<getAge()<<endl;}
};
class Labrador: public Dog{
    int countryOfOrigin;
    public:
    void func(){printAge();}
};*/

// 3. Multiple Inheritance
/*
class Human{
    int age;
    public:
    void speak(){cout<<"Human spoke"<<endl;}
};
class Animal{
    int breed;
    public:
    void bark(){cout<<"Animal barked"<<endl;}
};
class Hybrid: public Human, public Animal{
    bool canWalk();
    public:
    int lifeSpan;
};*/

// 4. Hierarchical Inheritance
// one class serve as parent class for more than 1 class

// 5. Hybrid Inheritance
// it is the combination of more than 1 type of inheritance
// e.g. Hierarchical Inheritance + Multiple Inheritance

int main(){
    // Male Ibad;
    // Ibad.setHealth(100);
    // cout<<Ibad.getHealth()<<endl;

    // Dog myDog;
    // myDog.setAge(20);
    // cout<<myDog.getAge()<<endl;
    // Labrador Igor;
    // Igor.setAge(4);
    // Igor.func();
    // cout<<Igor.getAge()<<endl;

    // Hybrid Rakshas;
    // Rakshas.speak();
    // Rakshas.bark();

    return 0;
}