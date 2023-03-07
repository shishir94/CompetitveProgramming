#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int ii=1;ii<=t;ii++){
    cout<<"Case #"<<ii<<": ";
    long long n ,m;
    cin>>n>>m;
    double arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(m==1){
        if(n%2!=0){
            cout<<fixed<<setprecision(1)<<arr[(n-1)/2]<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<(arr[(n-1)/2]+arr[(n-1)/2+1])/2<<endl;
        }
    }else{
        double sum = 0;
        for(int i = 0;i<m-1;i++){
            sum = sum + arr[n-i-1];
        }
        if((n-m+1)%2!=0){
            sum = sum + arr[(n-m)/2];
        }else{
            double x = ((arr[(n-m)/2]+arr[(n-m)/2+1])/2);
            sum = sum + x;
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
}
return 0;
}