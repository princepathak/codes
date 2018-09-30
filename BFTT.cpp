#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long N,n;
		cin>>N;
		while(1){
			N=N+1;
			int count =0;
			int temp ;
			long long temp2=N;
			while(temp2!=0){
				temp=temp2%10;
				if(temp==3)
					count++;
				if(count==3){
					 n=N;
				break;}
				temp2=temp2/10;
			}
		if(count==3){
			cout<<n<<"\n";
			break;
		}
	}}
}