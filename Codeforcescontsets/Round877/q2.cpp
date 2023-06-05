#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=-1;
    int y=-1;
    int z =-1;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            x=i;
        }else if(arr[i]==2){
            y=i;
        }else if(arr[i]==n){
            z=i;
        }
    }
    if(z> min(x,y) && z < max(x,y)){
        cout<<x+1<<" "<<y+1<<endl;
    }else if(z > max(x,y)){
        cout<<z+1<<" "<<max(x,y)+1<<endl;
    }else if(z < min(x,y)){
        cout<<z+1<<" "<<min(x,y)+1<<endl;
    }
    
}
return 0;
}