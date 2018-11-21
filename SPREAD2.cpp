#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N+1],B[N+1],count=0,j=1;
        B[0]=0;
        for(int k=1;k<=N;k++){
            cin>>A[k];
            B[k]=B[k-1]+A[k];
            if(k==j && j<N){
                j=j+B[k];
                count++;
            }
        }
    cout<<count<<endl;
    }
}