#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int T,N,Q,L,R;
	cin>>T;
	int temp=0;
	while(T--){
		cin>>N>>Q;
		long int A[N],i=0;
		while(i<N){
			cin>>A[i];
			i++;
		}
		for(int m=0;m<Q;m++){
			cin>>L>>R;
			int count=0;
			for(int k=L-1;k<R;k++){
				for(int l=k;l<R;l++){
					if(l==k) temp=A[l];
					else temp=temp&A[l];
					/*if(temp==0) {count=count+R-k-1;
					break;
					}*/
					long double root=round((sqrt(temp)));
					if(temp==root*root) count++;
				}
			}
			cout<<count<<"\n";
		}
	}
}