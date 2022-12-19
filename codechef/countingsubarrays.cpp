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
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    int i = 0;
    int j = 0;
    int sum = A[0];
    int cnt = 0;
    while(i <n && j < n){
        if(sum < B){
            j++;
            if(j >= i){
                cnt += j-i;
            }
            if(j < n){
                sum += A[j];
            }
        }else{
            sum -=A[i];
            i++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}