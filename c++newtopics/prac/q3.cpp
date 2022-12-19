/*
PATTERN MATCHING
input: 2 string
eg.,    aabbccddfgraabhgaabbcc
        aab

output 0 11 16
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string x,y;
    cin>>x>>y;
    int d = x.size();
    int f = y.size();
    for(int i=0;i<d;i++){
        //cout<<"i: "<<i<<endl;
        bool t = false;
        if(x[i] == y[0]){
            int j = 0;
            int k = i;
            while(j < f){
                //cout<<"j: "<<j<<endl;
                if(y[j] == x[k]){
                    t = false;
                    j++;
                    k++;
                }else{
                    t = true;
                    break;
                }
            }
            if(t == false){
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
}
return 0;
}