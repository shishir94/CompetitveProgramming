#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);    
    for(int i=0; i<n;i++) {
        cin>>arr[i];
    }
    int min=1,max=n;
    int i=0;
    int j=n-1;
    int pi;
    int pj;
    bool x = true;
    while(i<j){
        pi=i;
        pj=j;
        if(arr[j]==min){
            j--;
            min++;
        }
        else if(arr[j]==max){
            j--;
            max--;
        }
        if(arr[i]==min){
            i++;
            min++;
        }
        else if(arr[i]==max){
            i++;
            max--;
        }
        if(pi==i and pj==j){
            cout<<i+1<<" "<<j+1<<'\n';
            x = false;
            break;
        }
    }
    if(x){
        cout<<-1<<"\n";
    }
}
return 0;
}