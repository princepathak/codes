#include<iostream>
using namespace std;
int main(){
	int T,delay,distance;
	cin>>T;
	while(T--){
		string s1,s2;
		cin>>s1>>distance>>s2>>delay;
		int ch=s1[0]*10+s1[1];
		int cm=s1[3]*10+s1[4];
		int eh=s2[0]*10+s2[1];
		int em=s2[3]*10+s2[4];
		
		int diffh,diffm,total_time;
		if(ch<=eh){
			diffm=em-cm;
			if(diffm>=0){
				diffh=eh-ch;
			}
			else{
				diffm=60+em-cm;
				diffh=eh-ch-1;
			}
			total_time=diffh*60+diffm;
			if(total_time+delay>=distance)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else if{
			diffm=cm-em;
			if(diffm>0){
				diffh=ch-eh;
			}
			else{
				diffm=60+cm-em;
				diffh=ch-eh-1;
			}
			total_time=diffh*60+diffm;
			total_time=-total_time;
			if(total_time+delay>=distance)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
		else{
			diffm=em-cm;
			if(diffm+delay>=distance)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}