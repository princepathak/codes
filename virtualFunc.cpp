//Lab7
#include <iostream>
using namespace std;
class Base
{
    int a;
    public:
    Base(){
        a=10;
    }
    virtual void display(){
        cout<<"A is : "<<a;
    }
};
class Derived :public Base
{
    int a;
    public:
    Derived(){
        a=20;
    }
    void display(){
        cout<<"A is : "<<a;
    }
};
int main()
{
Base *ptr;
Derived D;
ptr=&D;
ptr->display();
}