#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isSub(string a, string b){
    int d = a.size();
    int e = b.size();
    int i = 0;
    int j = 0;
    while(i < d && j < e){
        if(b[j] != a[i]){
            i++;
        }else{
            i++;
            j++;
        }
    }
    return j;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a;
string b;
cin>>a;
while(a--){
    cin>>b;
    int d = b.size();
    string c = b;
    reverse(b.begin(), b.end());
    cout<<d-isSub(c,b)<<endl;
}
return 0;
}