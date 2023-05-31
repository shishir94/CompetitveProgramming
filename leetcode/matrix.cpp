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
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        priority_queue<int>p;
        int a=0,b=i;
        while(a<n && b<m){
            p.push(arr[a][b]);
            a++;
            b++;
        }
        a=a-1;
        b=b-1;
        while(!p.empty()){
            arr[a][b]=p.top();
            p.pop();a--;b--;
        }
    }
    for(int i=1;i<n;i++){
        int a=i;
        int b=0;
        priority_queue<int>p;
        while(a<n&&b<m){
            p.push(arr[a][b]);
            a++;
            b++;
        }
        a=a-1;
        b=b-1;
        while(!p.empty()){
            arr[a][b]=p.top();
            p.pop();a--;b--;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

}
return 0;
}