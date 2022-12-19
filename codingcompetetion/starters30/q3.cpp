#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int arr[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            arr[i][j] = 0;
        }
    }
    arr[x1-1][y1-1] = 1;
    arr[x2-1][y2-1] = 2;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((x1+y1-2) % 2 == 0){
                if((i+j) % 2 == 0 && arr[i][j] == 0){
                   // cout<<"helo"<<i<<" "<<j<<endl;
                    arr[i][j] = 1;
                }
            }else{
                if((i+j) % 2 != 0 && arr[i][j] == 0){
                    //cout<<"helo1"<<i<<" "<<j<<endl;
                    arr[i][j] = 1;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if((x2+y2-2) % 2 == 0){
                if((i+j) % 2 == 0 && arr[i][j] == 0){
                    arr[i][j] = 2;
                }
            }else{
                if((i+j) % 2 != 0 && arr[i][j] == 0){
                    arr[i][j] = 2;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == 0){
                arr[i][j] = 3;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
return 0;
}