#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	char bob[]="bob";
	while(T-->0){
		char top[3],bottom[3];
		cin>>top>>bottom;
		if(!strcmp(top,bob)||!strcmp(bottom,bob))
			cout<<"yes\n";
		if(!strcmp(top,"bbb")||!strcmp(bottom,"ooo")||!strcmp(top,"ooo")||!strcmp(bottom,"bbb"))
			cout<<"yes\n";
		else{
			int i=0,count=0,b1,b2,b3,flag=0;
			for(i=0;i<3;i++){
				if(top[i]=='b'||bottom[i]=='b'){
					count++;
					if(count==1)
						b1=i;
					if(count==2)
						b2=i;
					if(count==3)
						b3=i;
				}
			}
			if(count>=2){
				i=0;
				while(i<3){
					if(top[i]=='o'||bottom[i]=='o'){
						if(i!=b1&&i!=b2){
							flag = 1;
							cout<<"yes\n";
							break;
						}
						
						else if(i==b1||i==b2){
							flag=1;
							cout<<"no\n";
							break;
						}
					}i++;
				}
			}
			else{
				if(flag==0)
				cout<<"no\n";
				continue;
			}
		}
	}
}
