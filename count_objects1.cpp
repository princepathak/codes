/*Write a program to calculate the number of objects created for a class */
#include<iostream>
using namespace std;
class A{
	public:
	int fun(){
		static int c=5;
		c++;
		cout<<c;
	}
	static int a;
	A(){
		a++;
	}
	static int function(){
		int b=15;
		cout<<a;
		return b;
	}
};
int A::a=0;
int main(){
	A q;
	q.fun();
	A w;
	w.fun();
	A R;
	R.fun();
	cout<<R.function();
	cout<<A::a<<endl;
}
