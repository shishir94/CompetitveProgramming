#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n){
    vector<int> ans;
    if( n >= 1 && n <= 3){
        for(int i = 1;i<= n;i++){
            ans.push_back(i);
        }
    }else{
        ans.push_back(1);
        ans.push_back(2);
        if(n % 2 == 0){
        int d = (n-2)/2+2;
        int cnt = 0;
        for(int i = 3;i<= d;i++){
            ans.push_back(i);
            cnt++;
            ans.push_back(2*i);
            cnt++;
            if(cnt == n-2){
                break;
            }
        }
        }else{
            int d = (n-2)/2+3;
        int cnt = 0;
        for(int i = 3;i<= d;i++){
            ans.push_back(i);
            cnt++;
            if(cnt == n-2){
                break;
            }
            ans.push_back(2*i);
            cnt++;
            if(cnt == n-2){
                break;
            }
        }
        }
    } 
    return ans;
}

bool checker(vector<int>& x){
    int n = x.size();
    for(int i=1;i<=n-1;i++){
        if((i%2 == 0 && x[i+1-1]%x[i-1] == 0) || (i%2 ==1 && x[i+1-1]%x[i-1] !=0)){
            //cout<<i<<endl;
            return false;
        }
    }
    return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
for(int i=1;i<=100000;i++){
vector<int> t = fun(i);
    if(checker(t)){
        cout<<i<<" "<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
        cout<<i<<endl;
        break;
    }
}
return 0;
}