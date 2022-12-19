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
    long long n,l;
    cin>>n>>l;
    long long ans = 0;
    long long x = 0;
    int arr[l];
    char arr1[l];
    for(int i=0;i<l;i++){
        cin>>arr[i];
        cin>>arr1[i];
    }
   for(int i=0;i<n;i++){
        if(arr1[i]=='C'){
            x+=arr[i];
            if(x>=l){
                ans+=x/l;
                x=x%l;
                
            }
        }
        else{
            if(arr1[i]=='A'){
                x-=arr[i];
                if(abs(x)>=l){
                    ans+=(abs(x)/l);
                    x=x%l;
                    
                }
            }
        }
    }
    cout<<ans<<endl;
}
return 0;
}