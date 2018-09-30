/*Write a program to calculate the number of objects created for a class */
#include<iostream>
using namespace std;
class A{
	public:
	static int a;
	A(){
		a++;
	}
};
int A::a=5;
class B{
	public:
	int b;
	B(){
		b=a;
		cout<<b;
	}
};

int main(){
	B b1;
	cout<<A::a;
}
