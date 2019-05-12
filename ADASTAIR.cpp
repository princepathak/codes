#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K,count=0;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        if(arr[0]>K){
            if(arr[0]%K==0){
              count=arr[0]/K;
              count--;  
            }
            else 
                count=arr[0]/K;
        }
        for(int i=1;i<N;i++){
            int temp1=arr[i]-arr[i-1];
            if(temp1%K!=0){
                int temp=temp1/K;
                count+=temp;
            }
            else{
                int temp=temp1/K;
                count+=temp;
                count-=1;
            }
        }
        cout<<count<<endl;

    }
    
}