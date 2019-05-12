#include<iostream>
#include<fstream>
using namespace std;
class A{
    int a,b,c,d,e,f;
    public:
    void getdata(){
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>d;
       cin>>e;
       cin>>f;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
    }
};
int main(){
    A a1;
    a1.getdata();
    ofstream fout("Output.txt");
    fout.write((char*)&a1,sizeof(a1));
    fout.close();
    ifstream fin("Output.txt");
    A temp;
    fin.read((char*)&temp,sizeof(a1));
    fin.close();
    temp.display();
    return 0;
}