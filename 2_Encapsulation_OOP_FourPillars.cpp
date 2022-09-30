#include<iostream>
using namespace std;
// just making a class and making it's members private, 
// and changing them by getter/setter is Polymorphism

class Student{
    private: 
    string name;
    int age;
    int height;

    public:
    Student(int age = 0){
        this->age = age;
        cout<<"Default Constructor Called"<<endl;
    }
    Student(int age, int height){
        cout<<"Para. Constructor Called"<<endl;
        this->age=age;
        this->height=height;
    }
    void setAge() { this->age = age; }
    int getAge() { return this->age; }
};

int main(){
    Student rohan;
    cout << rohan.getAge()<<endl;
    Student raj(14, 178);
    cout << raj.getAge()<<endl;
    return 0;
}