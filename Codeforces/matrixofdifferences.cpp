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
    int arr[n][n];
    int ans = 1;
    int h = n*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                if((i+j)%2==0){
                    arr[i][j]=ans;
                    ans++;
                }else{
                    arr[i][j]=h;
                    h--;
                }
            }else{
                if((i+(n-j+1))%2==0){
                    arr[i][n-j-1]=ans;
                    ans++;
                }else{
                    arr[i][n-j-1]=h;
                    h--;
                }
            }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}