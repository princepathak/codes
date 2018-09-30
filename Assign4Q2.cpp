#include<iostream>
class Staff{
	protected:
	int code;
	char name[10];
	public :
	Staff(){
		code=0;
		name=NULL;
	}
};
class Teacher:private Staff{
	char Subject[10];
	String Publication;
	Teacher(){
	}
	void getdata(){
		cout<<"Enter the details Respectively: Code\n NAME\n Subject\nPublication\n";
		cin>>Code>>Name>>Subject>>Publication>>endl;
	}
};
class Typist:public Staff{
	int Speed;
	public:
	Typist(){
		Speed=0;
	}
	void getdata(){
		cout<<"Enter the details Respectively: Code\n NAME\n Speed\n";
		cin>>Code>>Name>>Speed>>endl;
	}
};
class Officer:private Staff{
	int Grade;
	public:
	Officer(){
		Grade=0;
	}
	void getdata(){
		cout<<"Enter the details Respectively: Code\n NAME\n Grade\n";
		cin>>Code>>Name>>Grade>>endl;
	}
};
class Regular:private Typist{
	public:
	Regular(){
		Speed=0;
	}
	void getdata(){
		cout<<"Enter the details Respectively: Code\n NAME\n Speed\n";
		cin>>Code>>Name>>Speed>>endl;
	}
};
class Casual:private Typist{
	int Daily_wages;
	public:
	Casual(){
		Speed=0;
	}
	void getdata(){
		cout<<"Enter the details Respectively: Code\n NAME\n Speed\nDaily_Wages";
		cin>>Code>>Name>>Speed>>Daily_wages>>endl;
	}
};
int main(){
	
	
}