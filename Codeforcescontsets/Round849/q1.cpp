#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    char s;
    cin>>s;
    if(s=='c'||s=='o'||s=='d'||s=='e'||s=='f'||s=='r'||s=='s'){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}