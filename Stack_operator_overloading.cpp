#include<iostream>
using namespace std;
class Stack{
	int top;
	int max;
	int stack[10];
	public :
	Stack(){
		top=-1;
		max=10;
	}
	void operator +(int value){
		if(top<max) top++;
		else cout<<"Stack Full";
		stack[top]=value;
	}
	int operator --(int){
		int temp;
		if(top>-1){
			temp=stack[top];
			top--;
		}
		else cout<<"Stack Empty";
		return temp;
	}
	bool is_empty(){
		return top==-1;
	}
	bool is_full(){
		return top== max-1;
	}
	int peek(){
		return stack[top];
	}
	void display(){
		for(int i=0;i<top;i++)
			cout<<"	"<<stack[i];
	}
	
	
};
int main(){
	Stack stack1;
	int temp,option=1,choice;
	while(option){
		cout<<"\nEnter the following to operate";
		cout<<"\nEnter 1 to Push 2 \nto pop element \n3 to view top element \n4to display stack\n to exit";
		cin>>choice;
		switch(choice){
			case 1:
				if(!stack1.is_full()){
				cout<<"Enter value";
				cin>>temp;
				stack1+temp;
				}
				else cout<<"Stack is full You cannot add more values to the stack\nPlease pop few element\n ";
				break;
			case 2:
				if(!stack1.is_empty()){
					cout<<"The popped element is:  "<<stack1--;
				}
				else cout<<"Stack is Empty\n";
				break;
			case 3:
				cout<<"Stack Top is: "<<stack1.peek();
				break;
			case 4:
					stack1.display();
			case 5:
				option =0;
				break;
			default :
				cout<<"Enter correct choice";
		}
		
	}
}