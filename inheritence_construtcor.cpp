#include<iostream>
using namespace std;
class A{
	int a;
	public:
	A(){
		cout<<"Element of class A construct A()\n";
	}
	A(int X){
		cout<<X<<"Element of class A construct A(X)\n";
	}
	A(int X,int Y){
		cout<<X<<Y<<"Element of class A construct A(X,Y)\n";
	}
};
class B:public A{
	int b;
	public:
	B():A(){
		cout<<"Element of class B construct B():A()\n";
	}
	B(int z){
		cout<<z<<"Element of class B construct B(int b)\n";
	}
	B(int Y,int X):A(X){
		cout<<Y<<"Element of class B construct B(int Y,int X):A(X)\n";
	}
	B(int X,int Y,int Z):A(X,Y){
		cout<<Z<<"Element of class B construct B(int X,int Y,int Z):A(X,Y)\n";
	}
};
class C:public A,public B{
	int c;
	public:
	C():A(),B(){
		c=0;
		cout<<"Element of class C construct C():A(),B()\n";
	}
	C(int X ,int Y ,int Z):A(X),B(Z){
		cout<<X<<"Element of class C construct C(int X ,int Y ,int Z):A(X),B(Z)\n";
	}
};
int main(){
	B b1;
	B b2(4,3);
	B b3(6,5,4);
	C C1(4,3,2);
	C C2;
	
}