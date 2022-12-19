/*
STRING SPLIT
input: string
eg., I am good

output: array having elements (string)
eg., {"I", "am", "good"}
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
    string x;
    getline(cin,x);
    int d = x.size();
    int cnt = 0;
    for(int i = 0;i<d;i++){
        if(x[i] == ' '){
            cnt++;
        }    
    }
    string arr[cnt+1];
    string z = "";
    int j = 0;
    for(int i = 0;i<d;i++){
        if(x[i] == ' '){
            arr[j] = z;
            z = "";
            j++;
        }else{
            z = z + x[i];
        }
    }
    int dd = z.size();
    if(dd != 0){
        arr[j] = z;
    }
    for(int i = 0;i<cnt+1;i++){
        cout<<arr[i]<<endl;
    }
}
return 0;
}