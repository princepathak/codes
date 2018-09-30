#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,K;
		cin>>N>>K;
		int a[N];
		for(int i=0;i<N;i++){
			cin>>a[i];
		}
		int i=0;
		while(N--){
				if(a[i]<=K){
					cout<<1;
					K=K-a[i];
					i++;
				}
				else{
					cout<<0;
					i++;
				}
			}
			cout<<"\n";
		}
	}