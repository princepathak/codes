#include<iostream>
using namespace std;
int main(){
	int T,N,R;
	cin>>T;
	while(T--){
		cin>>N>>R;
		int a[N],count=0,i=0;
		while(i<N){
			cin>>a[i];
			if(a[i]<=R)
				count++;
			i++;
		}
		cout<<N<<" "<<count<<" "<<count<<"\n";
	}
	
}