#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverse(int i ,int j ,string x){
    int h = i;
    string z = "";
    while(h <  j){
        if(x[h] != ' '){
            z = z + x[h];
        }
        h++;
    }
    int l = 0;
    int k = z.size()-1;
    while(l < k ){
        swap(z[l],z[k]);
        l++;
        k--;
    }
    z = z + " ";
    return z;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    string x;
    getline(cin,x);
    int d = x.size();
    int cnt = 0;
    vector<int>v;
    for(int i = 0;i<d;i++){
        if(x[i] == ' '){
            cnt++;
            v.push_back(i);
        }    
    }
    string z = "";
    if(cnt == 0){
       for(int i = d-1;i >=0;i--){
           z = z + x[i];
       }
    }else{
        
        for(int i = v[0]-1;i>=0;i--){
            z= z + x[i];
        }
        z = z + " ";
        
        for(int i = 0;i<v.size()-1;i++){
            z = z + reverse(v[i],v[i+1],x);
         // cout<<reverse(v[i],v[i+1],x)<<endl;
        }
       // z = z + " ";
        
        int p = v.size();
        int o = v[p-1]+1;
        for(int i = d-1;i>=o;i--){
            z= z+ x[i];
        }
    }
    cout<<z<<endl;
return 0;
}