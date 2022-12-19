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
    string s;
    cin>>s;
    int sumA = 0;
    int sumB = 0;
    int chanceA = n;
    int chanceB = n;
    for(int i = 0;i<2*n;i++){
        if(i%2==0){
            sumA+=s[i]-'0';
            chanceA--;
        }else{
            sumB += s[i]-'0';
            chanceB--;
        }
        if(sumB > sumA+chanceA){
            cout<<i+1<<endl;
            break;
        }else if(sumA > sumB+chanceB){
            cout<<i+1<<endl;
            break;
        }else if(sumA==sumB && i==2*n-1){
            cout<<i+1<<endl;
            break;
        }
    }
}
return 0;
}