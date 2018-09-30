#include<iostream>
using namespace std;
class parent{
	private: int private_a;
	public: int public_a;
	protected: int protected_a;
	public:
		parent(){
			private_a=1;
			public_a=2;
			protected_a=3;
		}
};
class child:protected parent{
	public:
	child(){
		//cout<<private_a;
		cout<<public_a;
		cout<<protected_a;
	}
};
class child2:protected child{
	public:
	child2(){
		//cout<<private_a;
		cout<<public_a;
		cout<<protected_a;
	}
};
int main(){
	//child c1;
	child2 c2	;
}