#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	pair<int,char> p[n];
	pair<int,int> max_count;
	max_count.first=0;
	max_count.second=0;
	for(int i=0;i<n;i++){
		cin>>p[i].second;
		p[i].first=i;
	}
	bool flag1=true,flag2=true;
	for(int temp=0;temp<n;temp++){
		flag1=true,flag2=true;
		int i=temp,j=(temp+1)%n;
		int count=0;
		char tempi=p[i].second,tempj=p[j].second;
		while((flag1||flag2)&&(i!=j)){
			if(tempi!=p[i].second){
				flag1=false;
			}
			else{
				//i=(i-1)%n;
				if(i-1<0)
					i=n-1;
				else
					i=i-1;
				cout<<i<<endl;
				count++;
			}
			if(tempj!=p[j].second){
				flag2=false;
			}
			else{
				j=(j+1)%n;
				count++;
			}
			if(abs(i-j)==1){
				if(tempi==p[i].second)
					count++;
				if(tempj==p[j].second)
					count++;
				break;
			}
		}
			cout<<"Max count is: "<<count<<"point to be broken at :"<<temp<<endl;
		}
	}