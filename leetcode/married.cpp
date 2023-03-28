// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     long long n;
//     cin>>n;
//     string s;
//     cin>>s;
//     long long arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
// }
// return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int n,string s,int j){
    int ans = 0;
    while(true){
        if(s[j+1]=='#'){
            s[j+1]='.';
        }else{
            j++;
        }
        if(j==n-1){
            return true;
        }
        s[ans]='E';
        ans++;

        if(s[j]=='E'){
            return false;
        }
    }
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n,j;
    cin>>n>>j;
    string s;
    cin>>s;
    if(solve(n,s,j-1)){
        cout<<"JAY"<<endl;
    }else{
        cout<<"JEFF"<<endl;
    }
}
return 0;
}