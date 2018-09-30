#include<iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,i,j,temp;
		cin>>N;
		int a[N][2];
		for(i=0;i<N;i++){
			cin>>a[i][0];
			if(!(a[i][0]&1))
				a[i][1]=0;
			else
				a[i][1]=1;
		}
	int  count=0;
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			if(a[i][1]==a[j][1]){
				temp=a[i][0]^a[j][0];
				if(temp%2==0&&temp!=2&&temp!=0)
					count++;
			}
		}
	}
	cout<<count<<"\n";
	}
}