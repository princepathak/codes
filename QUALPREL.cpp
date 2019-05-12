#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
         int count=0,j=0;
        sort(arr, arr+N, greater<int>());
        for(int i=0;i<N;i++){
            if(arr[i]>=arr[K])
                count++;
            else 
                break;
        }
        cout<<count<<endl;
    }
}