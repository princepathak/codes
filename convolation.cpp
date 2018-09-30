#include<iostream>
using namespace std;
int main(){
	int n1,n2,i,val;
	cout<<"Enter the value of n1 and n2\n";
	cin>>n1>>n2;
	if(n1>n2)
		val=n2;
	else
		val=n1;
	int a[n1],b[n2],c[n2],d[n1+n2-1];
	cout<<"Enter value of signal a\n";
	for(i=0;i<n1;i++){
		cin>>a[i];
	}
	cout<<"Enter value of signal b\n";
	for(i=0;i<n2;i++){
		cin>>b[i];
		c[n1-i-1]=b[i];
	}
	for(i=0;i<n1+n2-1;i++){
		int sum=0,temp=i;
		for(int j=0;(j<=val-1)&&(j<=i);j++){
			sum=sum+a[j]*c[n1-1-temp--];
		}   
		d[i]=sum;
	}
	for(i=0;i<n1+n2-1;i++)
		cout<<d[i]<<"  ";
	
}