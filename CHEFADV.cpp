#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M,X,Y;
		cin>>N>>M>>X>>Y;
		N--;
		M--;
		if(N%X==0&&(M)%Y==0)
			cout<<"Chefirnemo\n";
		else{
			if(((N-1)%X==0&&(M-1)%Y==0)&&(N!=0&&M!=0))
				cout<<"Chefirnemo\n";
	
			else
				cout<<"Pofik\n";
		}
	}
}