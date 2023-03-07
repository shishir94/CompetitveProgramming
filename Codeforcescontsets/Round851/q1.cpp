#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"1"<<endl;
    }else if(cnt %2!=0){
        cout<<"-1"<<endl;
    }else{
        int f =0;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                f++;
                if(f==cnt/2){
                    c=i;
                    break;
                }
            }
        }
        cout<<c+1<<endl;
    }
}
return 0;
}