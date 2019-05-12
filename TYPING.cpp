#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        float sum=0;
        int N,left=0,right=0;
        cin>>N;
        string a;
        string arr[N];
        float time1[N];
        for(int i=0;i<N;i++){
            cin>>a;
            arr[i]=a;
            time1[i]=0;
            int flag=0,left=0,right=0;
            for(int k=0;k<i;k++){
                if(arr[k]==arr[i]){
                    time1[i]=time1[k]/2;
                    flag=1;
                }
            }
            if(flag==0){
            for(int j=0;j<arr[i].size();j++){
                    if(arr[i][j]=='d' || arr[i][j]=='f'){
                        if(right==0 &&  left==0){
                            time1[i]+=0.2;
                            left=1;
                            right=0;
                        }
                        else if(arr[i][j]==arr[i][j-1]){
                            time1[i]+=0.4;
                            left=1;
                            right=0;
                        }
                        else if(left==0){
                            time1[i]+=0.2;
                            left=1;
                            right=0;
                        }
                        else{
                            time1[i]+=0.4;
                            left=1;
                            right=0;
                        }
                    }
                    else{
                        if(right==0 &&  left==0){
                            time1[i]+=0.2;
                            right=1;
                            left=0;
                        }
                        else if(arr[i][j]==arr[i][j-1]){
                            time1[i]+=0.4;
                            left=0;
                            right=1;
                        }
                        else if(right==0){
                            time1[i]+=0.2;
                            right=1;
                            left=0;
                        }
                        else{
                            time1[i]+=0.4;
                            left=0;
                            right=1;
                        }
                    }
                }
            }
            sum+=time1[i]; 
            cout<<time1[i]<<endl;      
        }
        cout<<sum*10<<endl;
    }
}