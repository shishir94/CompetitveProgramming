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
  //  int g = 0;
    x = arr[0]/n;
    ans = arr[0]%n;
    for(int i=1;i<l;i++){
       if(arr1[i]!=arr1[i-1]){
            ans = abs(arr[i]-(ans%n));
         //   cout<<ans<<" ";
            x+=ans/n;
            ans=ans%n;
          //  cout<<x<<" "<<ans<<endl;
        }else{
            ans = ans + arr[i];
            x+=ans/n;
            ans = ans%n;
         //   cout<<ans<<" "<<x<<endl;
          //  ans  = ans%n;
       }
    }
    cout<<x<<endl;
}
return 0;
}