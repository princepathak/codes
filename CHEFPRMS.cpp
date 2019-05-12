#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n)
{
	int m=sqrt(n);

	for(int i=2;i<m;i++)
	{
		if(n%m==0)return false;
	}
return true;
}
bool is_semiprime(int n){
    int count=0;
	while(n%2==0){n/=2;count=1;}

	for(int i=3;i<sqrt(n);i+=2){
		if(prime(i) && n%i==0){
			count++;
			while(n%i==0)
				n=n/i;
		}
		if(count==2)
			break;
	}
	if (n > 2)
       		 count++;
    if(count==2)
        return true;
    return false;
    }
int main(){
    int T,N;
    cin>>T;
    while(T--){
        cin>>N;
        int flag=0;
        if(N<6)
            cout<<"NO"<<endl;
        else{
            for(int i=6;i<=N/2;i++){
                if((is_semiprime(i)==1)&&(is_semiprime(N-i)==1)){
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag!=1)
            cout<<"NO"<<endl;
    }

}