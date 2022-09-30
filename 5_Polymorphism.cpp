#include<iostream>
using namespace std;
// values that are declared within a function when the function is called are known as an argument.
// Whereas, the variables that are defined when the function is declared are known as a parameter.

// Compile time polymorphism
/*
class A{
    public:
    int add(int x, int y) { return x + y;}

    double add(double x, double y) { return x + y + 1;}

    // int add(int xx, int yy) { return xx + yy;} // we cant't do this, & there no benefit in it also

    int add(int x, int y, int z) { return (x + y + z);}

    // default parameter function
    int add(int x, int y = 0, int z = 0, int w = 0) {
        cout<<"default parameter function called "<<endl;
        return (x + y + z + w);
    }
};

int main(){
    A obj;
    cout<<obj.add(19, 3, 6, 2)<<endl;
    return 0;

}*/


// Runtime polymorphism (method / function overriding)
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
// having same name but Dog class is overriding the speak() method
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Animal a1;
    a1.speak();
    Dog d1;
    d1.speak();
}