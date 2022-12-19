#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n%2!=0){
        return 0;
    }else{
        long long cnt = 0;
        while(n%2==0){
            n = n/2;
            cnt ++;
        }
        return cnt;
    }
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long arr[2*n];
    long long odd = 0;
    long long even = 0;
    for(int i = 0;i<2*n;i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    if(odd>= even){
        cout<<(odd-even)/2<<endl;
    }else{
        long long arr1[2*n];
        for(int i =0;i<2*n;i++){
            arr1[i] = power(arr[i]);
        }
        sort(arr1,arr1+2*n);
        int d = 0;
        for(int i = 0;i<2*n;i++){
            if(arr1[i] != 0 ){
                d = i;
                break;
            }
        }
        //cout<<d<<endl;
        long long ans = 0;
        for(int i = 0;i<(n-odd);i++){
            ans = ans + arr1[d+i];
        }
        cout<<ans<<endl;
    }
}
return 0;
}