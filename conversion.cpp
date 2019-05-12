#include<iostream>

using namespace std;

class M_CM
{
                int m, cm;
public:
    void printData();
                M_CM(){}
                void getData();
                M_CM(int m, int cm)
                {
                this->m = m;
                this->cm = cm;
                }
                operator F_I()
                {
                                int f, i, cm;
                                cm = (m*100) + cm;
                                i = cm / 2.5 ;
                                f = i % 12;
                                i = i / 12;
                                return F_I( f , i );
                }
};
class F_I
{
int feet, inches;
public:
    void getData();
                void printData();
                F_I(){}
                F_I(int f, int i)
                {
                 feet = f;
                 inches = i;
                }
                operator M_CM()
                {
                                int m, cm;
                                int i;
                                i = (12*feet) + inches;
                                cm = i*2.5;
                                m = cm/100;
                                cm = cm%100;
                                return M_CM(m, cm);
                }
};
int main()
{
                F_I f;
                M_CM m;
                cout << "Conversion for meters and centimeters to inches" << endl;
                f.getData();
                m.getData();
                f = m;
                f.printData();
                return(0);
}
void M_CM::printData(){
    cout << "Meter : " << m << "\nCENTI-METERS : " << cm << endl;
}
void M_CM::getData(){
   cout << "Enter height in meters and centimeters " << endl;
                                cin >> m >> cm;
}
void F_I::printData(){
    cout << "FEET : " << feet << "INCHES : " << inches << endl;
}
void F_I::getData(){
    cout << "Enter height in feet and inches" << endl;
    cin >> feet >> inches;
}