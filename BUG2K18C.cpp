#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	cout<<"HI";
	string s1,s2;
	while(T--){
	int a[123],b[123],c,i=0;
	while(i<=122){
		a[i]=0;
		b[i]=0;
		i++;
	}
	i=0;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();
	while(i<l1){
		c=s1[i];
		a[c]++;
		i++;
	}
	i=0;
	while(i<l2){
		c=s2[i];
		b[c]++;
		i++;
	}
	i=48;
	int flag=0;
	while(i<123){
		if((a[i]>b[i])&&(a[i]!=0)){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	}
	}
