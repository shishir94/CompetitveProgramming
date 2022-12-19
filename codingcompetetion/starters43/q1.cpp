#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    long long x ,y;
    cin>>x>>y;
    if(x == 1){
        cout<<"a"<<endl;
    }else{
        int a = x/2;
        if(x%2== 0){
            if(y > a){
                cout<<"-1"<<endl;
            }else{
                string s1 = "";
                string s2="";
                for(int i = 0;i<y;i++){
                    s1 = s1+arr[i];
                }
                for(int i = 0;i<(x-y*2);i++){
                    s1 = s1 + arr[0];
                }
                for(int i = 0;i<y;i++){
                    s2 = s2+ s1[y-1-i];
                }
                cout<<s1+s2<<endl;
            }
        }else{
            if(y > a+1){
                cout<<"-1"<<endl;
            }else{
                string s1 = "";
                string s2="";
                for(int i = 0;i<y;i++){
                    s1 = s1+arr[i];
                }
                for(int i = 0;i<(x-y*2);i++){
                    s1 = s1 + arr[0];
                }
                if(y != x/2+1){
                    for(int i = 0;i<y;i++){
                        s2 = s2+ s1[y-1-i];
                    }
                }else{
                    for(int i = 0;i<y;i++){
                        s2 = s2+ s1[y-2-i];
                    }
                }
                cout<<s1+s2<<endl;
            }
        }
    }
}
return 0;
}