#include<iostream>
using namespace std;
int n=0,a[16][16];
void initilize(){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++)
			a[i][j]=0;
	}
}
void print(){
	for(int i=0;i<16;i++){
		for(int j=0;j<16;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
bool check(int i,int j){
	for(int temp=0;temp<16;temp++){     //check in column j in all the rows for queen;
		if(a[temp][j]==1)
			return false;
	}
	for(int temp=0;temp<16;temp++){     //check in row temp in all the previous columns for queen;
		if(a[i][temp]==1)
			return false;
	}
	for(int temp1=i,temp2=j;temp1>=0&&temp2>=0;temp1--,temp2--){//checks in upper diagonal for queen;
		if(a[temp1][temp2]==1)
			return false;
	}
	for(int temp1=i,temp2=j;temp1<16&&temp2>=0;temp1++,temp2--){  //checks for queen in lower diagonal;
		if(a[temp1][temp2]==1)
				return false;
	}
	return true;
}

bool add_queen(int i,int j,int N){
	if(N==16){
		print();
		cout<<"\n\n";
		return false;
	}
	for(int temp=0;temp<16;temp++){
		if(check(temp,j)){	
		//checks if position is suitable
		//cout<<"OK";
			a[temp][j]=1;
			N++;
			//print();
			//cout<<"\n\n";
			if(!add_queen(temp,++j,N)) {  //checks if the further arrangement satisfies according to the current.
				a[temp][--j]=0;
				N--;
			}
		//print();
		}
		}
	return false;
		
	}
int main(){
	initilize();
	add_queen(0,0,0);
	return 0;
}