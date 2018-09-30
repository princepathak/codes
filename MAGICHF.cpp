#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,X,S;
		cin>>N>>X>>S;
		int gold=X;
		while(S--){
			int i,j;
			cin>>i>>j;
			if(i==gold)
				gold=j;
			else if(j==gold)
				gold=i;
		}
		cout<<gold<<"\n";
	}
}