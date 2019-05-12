#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class A{
    public:
    string name,address,section,username,password;
    int mobile;
    void getdata(){
        cout<<"Enter mobile no.\n";
       cin>>mobile;
       cout<<"Enter the name\n";
       cin>>name;
       cout<<"Enter the address\n";
       cin>>address;
       cout<<"Enter the section\n";
       cin>>section;
       cout<<"Enter the username\n";
       cin>>username;
       cout<<"Enter the password\n";
       cin>>password;
    }
    void display(){
    cout<<name<<"   "<<address<<"   "<<mobile<<"    "<<section<<"   "<<username<<"  "<<password<<"\n";
    }
};
int main(){
    cout<<"Enter the number of entries\n";
    int n;
    cin>>n;
    A a1[n];
    for(int i=0;i<n;i++){
        a1[i].getdata();
    }
    ofstream fout("Output1.txt");
    for(int i=0;i<n;i++){
        fout.write((char*)&a1[i],sizeof(a1));
        fout.close();
    }
    int pos;
    ifstream fin("Output1.txt");
    A temp;
    string username,password;
    cout<<"Enter username and password respectively\n";
    cin>>username>>password;
    while(fin){
        fin.read((char*)&temp,sizeof(a1));
        if(temp.username==username && temp.password==password){
            cout<<"Please enter your new name and address\n";
            string name,address;
            cin>>name>>address;
            temp.name=name;
            temp.address=address;
            break;
        }
        pos= fin.tellg();
    }
    fin.close();
    fout.seekp(pos,ios::beg);
    fout.write((char*)&temp,sizeof(temp));
    fout.close();
    while(fin){
        fin.read((char*)&temp,sizeof(a1));
        temp.display();
    }
    return 0;
}