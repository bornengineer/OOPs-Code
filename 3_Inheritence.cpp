#include<iostream>
using namespace std;
// we can have cases here - where health is 1. public, 2. protected, 3. private
// and 3 cases each each of them where the Human class is inherited -
// 1. public, 2. protected, and 3. private

/*class Human{
    // health is public
    public:
    int health;
    int getHealth(){ return this->health; }
};
// public, protected, private
class Male: private Human{
    int beard;
    public:
    int getHealth(){ return this->health; }
};*/

/*class Human{
    // health is protected
    protected:
    int health;
    public:
    int getHealth(){ return this->health; }
};
// public, protected, private
class Male: private Human{
    int beard;
    public:
    int getHealth(){ return this->health; }
};*/

// /*
class Human{
    // health is private
    public:
    int health;
    public:
    int getHealth(){ return this->health; }
};
// public, protected, private
class Male : public Human{
    int beard;
    public:
    int getHealth(){ return this->health; }
};
// */


int main(){
    Male ramesh;
    cout<<ramesh.health<<endl;
    return 0;
}