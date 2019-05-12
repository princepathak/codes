#include<iostream>
#include<cstdlib>
using namespace std;
class node{
    public:
    int data;
    node* next;         //next here refers previous node;
};
class Stack{
    public:
    node*top;
    Stack(){
        top=NULL;
    }
    void push(int data){
        node *temp= new node;
        temp->data=data;
        if(top==NULL){
            top=temp;
            top->next=NULL;
        }
        else{
            temp->next=top;
            top=temp;
        }
    }
    int pop(){
        node *temp=top;
        int data=top->data;
        top=top->next;
        free(temp);
        return data;
    }
    bool is_empty(){
        if(top==NULL)
            return true;
        else
            return false;
    }
    void print(){
        node* temp;
        temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
    }
};
class queue{
    public:
    node *front;
    node *rear;
    queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int data){
        node *temp=new node;
        temp->data=data;
        if(front==NULL&&rear==NULL){
            temp->next=NULL;
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
    }
    int dequeue(){
        node *temp=front;
        int data=front->data;
        front=front->next;
        free(temp);
        return data;
    }
    void print(){
        node* temp;
        temp=front;
        while(temp->next!=NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
    }
};
int main(){
    int choice,option=1,choice1,choice2;
    Stack S1;
    queue q1;
    while(option){
        cout<<"Please enter 1 for stack 2 for queue \n"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter 1 to push 2 to pop 3 to print\n ";
                cin>>choice1;
                switch(choice1){
                    case 1:
                        int data;
                        cout<<"Enter data";
                        cin>>data;
                        S1.push(data);
                        break;
                    case 2:
                        cout<<"The data is : "<<S1.pop()<<endl;
                        break;
                    case 3:
                        S1.print();
                        break;
                    default:
                        cout<<"enter correct choice\n";
                }
                break;
            case 2:
                cout<<"Enter 1 to enqueue 2 to dequeue 3 to print\n ";
                cin>>choice2;
                switch(choice2){
                    case 1:
                        int data;
                        cout<<"Enter data";
                        cin>>data;
                        q1.enqueue(data);
                        break;
                    case 2:
                        cout<<"The data is : "<<q1.dequeue()<<endl;
                        break;
                    case 3:
                        q1.print();
                        break;
                    default:
                        cout<<"enter correct choice\n";
                }
                break;
            case 3:
                option=0;
                break;
            default:
                cout<<"enter correct choice\n";
        }
    }
}