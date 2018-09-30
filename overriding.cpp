#include<iostream>
using namespace std;
class A{
	int a;
	public:
	a(){
		a=0;
	}
	void fl(){
		a=5;
		cout<<a<<"	Value of class A F1\n";
	}
	void F2(int i){
		a=i;
		cout<<a<<"	Value of class A F2\n";
	}
	void F1(int j){
		int a=j;
		cout<<a<<"	Value of class A F1(int j)\n";
	}
};
class B:public A{
	int b;
	public:
	a(){
		b=0;
	}
	void fl(){
		b=5;
		cout<<b<<"	Value of class B F1\n";
	}
	void F1(int i,int j){
		b=i+j;
		cout<<b<<"	Value of class B F2\n";
	}
	void F2(int j){
		int b=j;
		cout<<b<<"	Value of class B F2(int j)\n";
	}
};
int main(){
	B b1;
	b1.f1();
	b1.f1(2);
	b1.f1(2,3);
	b1.f2(4);
	
}