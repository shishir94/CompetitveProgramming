#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int i = 0;i<t;i++){
    string a;
    cin>>a;
    int x = a.size();
    if(a[x-1] == 'y'|| a[x-1] == 'Y'){
        cout<<"Case #"<<i+1<<": "<<a<<" is ruled by nobody."<<endl;
    }else if(a[x-1] == 'a' || a[x-1] == 'e' ||a[x-1] == 'i'||a[x-1] == 'o'||a[x-1] == 'u'|| a[x-1] == 'A'||a[x-1] == 'E'||a[x-1] == 'I'||a[x-1] == 'O'||a[x-1] == 'U'){
        cout<<"Case #"<<i+1<<": "<<a<<" is ruled by Alice."<<endl;
    }else{
        cout<<"Case #"<<i+1<<": "<<a<<" is ruled by Bob."<<endl;
    }
}
return 0;
}