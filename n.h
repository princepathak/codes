#include<iostream>
using namespace std;
int n=0,a[8][8];
void initilize(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			a[i][j]=0;
	}
}
void print(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
bool check(int i,int j){
	for(int temp=0;temp<j;temp++){     //check in row temp in all the previous columns for queen;
		if(a[i][temp]==1)
			return false;
	}
	for(int temp1=i,temp2=j;temp1>0&&temp2>0;temp1--,temp2--){//checks in upper diagonal for queen;
		if(a[temp1][temp2]==1)
			return false;
	}
for(int temp1=i,temp2=j;temp1<8&&temp2>0;temp1++,temp2--){  //checks for queen in lower diagonal;
	if(a[temp1][temp2]==1)
			return false;
}
}

bool add_gueen(int i,int j,int N){
	if(N==0){
		print();
		return true;
	}
	for(int temp=0;temp<8;temp++){
		if(check(temp,j)){			//checks if position is suitable
			a[temp][j]=1;
			if(!add_queen(temp,++j,N-1))   //checks if the further arrangement satisfies according to the current.
				a[temp][--j]=0;
		}
		}
		
	}
int main(){
	
}