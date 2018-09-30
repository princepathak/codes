#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int T,N,X;
	cin>>T;
	while(T--){
		cin>>N>>X;
		int size[N],i=0,sum=0,temp=N;
		while(i<temp){
			cin>>size[i];
			i++;
		}
		sort(size,size +N);
		cout<<"HI";
		for(i=0;i<N;i++){
			sum+=size[i];
			if(sum>X)
				break;
		}
		cout<<i;
	}
}