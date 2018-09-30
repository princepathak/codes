#include<iostream>
using namespace std;
int fun(int,int [],int);
int main(){
	int N,A,K;
	cin>>A>>N>>K;
	int a[K],temp=0,i;
	for(i=0;i<K;i++){
		a[i]=0;
	}
	while(temp<A){
		i=0;
		fun(N,a,i);
		temp++;
		}
	//cout<<"\n";
	for(i=0;i<K;i++)
		cout<<a[i]<<" ";
}
int fun(int N,int a[],int i){
	if(a[i]<N){
		a[i]++;
		return 0;
	}
	else{
		a[i]=0;
		i++;
		fun(N,a,i);
		return 0;
	}		
}