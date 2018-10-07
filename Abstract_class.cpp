//Create a Base Class named Car
//Create its child classes such as mercedes and BMW 
//Base Class Should be abstract class.
//Lab 7;
#include<iostream>
using namespace std;
class Car{
    protected:int car;
    public:
    Car(){
        car=15;
    }
    virtual void Display_car(){
        cout<<"No of car is:"<<car;
        cout<<"\n";
    }
    void Disp(){
        cout<<"No of car is:"<<car;
        cout<<"\n";
    }
};

class Mercedes: public Car{
    int mercedes;
    public:
    Mercedes(){
        mercedes=5;
        car=car+5;
    }
    void Display_car(){
        cout<<"No of Mercedes is:"<<mercedes;
        cout<<"\n";
    }
};
class BMW :public Car{
    int bmw;
    public:
    BMW(){
        bmw=10;
        car=car+10;
    }
    void Display_car(){
        cout<<"No of BMW is:"<<bmw;
        cout<<"\n";
    }
};
int main(){
    Car *C1,*C2,*C3,d;
    BMW b;
    Mercedes m;
    C1=&b;
    C2=&m;
    C1->Display_car();
    C2->Display_car();
    //C3->Display_car();
    C3=&d;
    C3->Disp();
}