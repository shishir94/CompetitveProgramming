#include<iostream>
#include<bits/stdc++.h>
using namespace std;


long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res%p;
}

bool check(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    string s;
    cin>>s;
    if(n%3 ==1){
        cout<<"YES"<<endl;
    }else{
        vector<vector<long long>>v(26);
        for(int i=0;i<n;i++){
            v[s[i]-'a'].push_back(i);
        }
        bool temp = false;
        for(int i=0;i<v.size();i++){
            long long temp1 = n+1;
            long long temp2 = -1;
            long long ii=0;
            long long j = v[i].size()-1;
            while(ii <j){
                if(v[i][ii] % 3 == 0){
                    temp1 = ii;
                    break;
                }
                ii++;
            }
            while(j >= 0){
                if((n-1-v[i][j]) %3 ==0){
                    temp2 = j;
                    break;
                }
                j--;
            }
            if(temp2 >temp1){
                temp=true;
                break;
            }
        }
        if(temp == true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}