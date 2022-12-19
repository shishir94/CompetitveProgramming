#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,q;
    cin>>n>>q;
    int row[n+1] = {0};
    int col[n+1] = {0};
    for(int i = 0;i<q;i++){
        string s;
        cin>>s;
        int rc;
        cin>>rc;
        int x;
        cin>>x;
        if(s=="RowAdd"){
            row[rc]+=x;
        }
        else if(s=="ColAdd"){
            col[rc]+=x;
        }
    }
    int maxR=0,maxC=0;
    for(int i=1;i<n+1;i++){
        maxR=max(maxR,row[i]);
        maxC=max(maxC,col[i]);
    }
    cout<<maxR+maxC<<endl;
    return 0;
}