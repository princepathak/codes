#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int flag=0;
        int k=s.size();
        int arr[k];
        for(int i=0;i<k;i++){
            arr[i]=-1;
        }
        for(int i=0;i<k;i++){
            int temp;
            if(s[i]!='.'){
                temp=s[i];
                int j=i-temp;
                int l=i+temp;
                if(j<0){
                    j=0;
                }
                if(l>=k){
                    l=k-1;
                }
                for(int m=j;m<=l;m++){
                    arr[m]++;
                }
            }
        }  
        for(int j=0;j<k;j++){
             if(arr[j]>0){
                 cout<<"unsafe"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
                cout<<"safe"<<endl;
            }

    }
}

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int T,y=0,N,K;
    cin>>T;
    while(T--)
    {
        int x;
        cin>>N>>K;
        int n=N;
        while(n--){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        int i=0;
        while(i!=N-1){
	       	if(v[i]>K){
		       	int x=v[i]-K;
		       	v[i]=v[i]-x;
		       	v[i+1]=v[i+1]-x;
	       	}
        }
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
        v.clear();
       
    }
    return 0; 
}