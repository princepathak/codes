#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class A{
    public:
    string name,address,section,username,password;
    int mobile;
    void getdata(){
       cout<<"Enter the name"<<endl;
       cin>>name;
       cout<<"Enter the address"<<endl;
       cin>>address;
       cout<<"Enter the section"<<endl;
       cin>>section;
       cout<<"Enter the username"<<endl;
       cin>>username;
       cout<<"Enter the password"<<endl;
       cin>>password;
       cout<<"Enter mobile no."<<endl;
       cin>>mobile;
    }
    void display(){
    cout<<name<<"   "<<address<<"   "<<mobile<<"    "<<section<<"   "<<username<<"  "<<password<<""<<endl;
    }
};
int main(){
    cout<<"Enter the number of entries"<<endl;
    int n;

    cin>>n;
    A a1[n];
    for(int i=0;i<n;i++){
        a1[i].getdata();
        cin.ignore();
    }
    ofstream fout("Output.txt");
    for(int i=0;i<n;i++){
        fout.write((char*)&a1[i],sizeof(a1[i]));
    }
    int pos;
    ifstream fin("Output.txt");
   
    /*string username,password;
     cout<<"Enter username and password respectively"<<endl;
     //int m;
     //cin>>m;
     //cout<<"above whiile";
    // cin.ignore();
     cin>>username>>password;
     fin.seekg(0,ios::beg);
    while(fin.good()){
        //cout<<"in whiile";
         A temp;
        fin.read((char*)&temp,sizeof(a1));
        cout<<"in whiile"<<endl;
        cout<<temp.username<<"  "<<temp.password<<endl;
        if(temp.username==username && temp.password==password){
            cout<<"Please enter your new name and address"<<endl;
            string name,address;
            //cin.ignore();
            cin>>name>>address;
            temp.name=name;
            temp.address=address;
            break;
        }
        pos= fin.tellg();
    }*/
    A temp;
    /*cout<<"below whiile";
    fin.seekg(0,ios::beg);
    fout.seekp(pos,ios::beg);
    fout.write((char*)&temp,sizeof(temp));
    */
    while(fin.good()){
        fin.read((char*)&temp,sizeof(temp));
        temp.display();
    }
    fout.close();
    fin.close();
    return 0;
}