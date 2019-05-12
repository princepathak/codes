#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number of queries \n";
    int q;
    cin>>q;
    while(q){
        q--;
        int index,value;
        cout<<"Enter index and value respectively\n";
        cin>>index>>value;
        int temp=n;
        a[index]=value;
        int flag=0;
        int a1[temp];
        int b1[temp];
        for(int i=0;i<n;i++){
            a1[i]=a[i];
            b1[i]=a[i];
        }
        while(temp!=1){
            int result;
            if(flag==0){  //perform or operation
                for(int i=0,j=0;i<temp,j<temp/2;i+2,j++){
                    result=a1[i]|a1[i+1];
                    b1[j]=result;
                }
                flag=1;
            }
            if(flag==1){  //perform xor operation
                for(int i=0,j=0;i<temp,j<temp/2;i+2,j++){
                    result=b1[i]^b1[i+1];
                    a1[j]=result;
                }
                flag=0;
            }
            temp=temp/2;
        }
        if(flag==0){
            cout<<"The value is:"<<b1[0]<<endl;
        }
        else
            cout<<"The value is:"<<a1[0]<<endl;
    }
}
