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


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    vector<vector<char>>v;
    for(int i=0;i<3;i++){
        vector<char>l;
        for(int j=0;j<3;j++){
            char x;
            cin>>x;
            l.push_back(x);
        }
        v.push_back(l);
    }
    char ans;
    bool p = false;
    int cntp=0;
    int cntx=0;
    int cntz=0;
    for(int i=0;i<3;i++){
        cntp=0;
        cntx=0;
        cntz=0;
        for(int j=0;j<3;j++){
            if(v[i][j] == 'X'){
                cntx++;
            }
            if(v[i][j] == '+'){
                cntp++;
            }
            if(v[i][j] == 'O'){
                cntz++;
            }
        }
        if(cntx == 3){
            ans ='X';
            p=true;
            break;
        }else if(cntp== 3){
            ans='+';
            p=true;
            break;
        }else if(cntz ==3){
            ans='O';
            p=true;
            break;
        }
    }
    if(p){
        cout<<ans<<endl;
    }else{
        for(int i=0;i<3;i++){
            cntp=0;
            cntx=0;
            cntz=0;
            for(int j=0;j<3;j++){
                if(v[j][i] == 'X'){
                    cntx++;
                }
                if(v[j][i] == '+'){
                    cntp++;
                }
                if(v[j][i] == 'O'){
                    cntz++;
                }
            }
            if(cntx == 3){
                ans ='X';
                p=true;
                break;
            }else if(cntp== 3){
                ans='+';
                p=true;
                break;
            }else if(cntz ==3){
                ans='O';
                p=true;
                break;
            }
        }
        if(p){
            cout<<ans<<endl;
        }else{
            cntp=0;
            cntx=0;
            cntz=0;
            int i=0,j=0;
            while(i<3 && j<3){
                if(v[i][j] == 'X'){
                    cntx++;
                }else if(v[i][j] == '+'){
                    cntp++;
                }else if(v[i][j] == 'O'){
                    cntz++;
                }
                i++;
                j++;
            }
            if(cntx == 3){
                ans ='X';
                p=true;
            }else if(cntp== 3){
                ans='+';
                p=true;
            }else if(cntz ==3){
                ans='O';
                p=true;
            }
            if(p){
                cout<<ans<<endl;
            }else{
                cntp=0;
                cntx=0;
                cntz=0;
                int i=0,j=2;
                while(i<3 && j>=0){
                    if(v[i][j] == 'X'){
                    cntx++;
                    }else if(v[i][j] == '+'){
                        cntp++;
                    }else if(v[i][j] == 'O'){
                        cntz++;
                    }
                    i++;j--;
                }
                if(cntx == 3){
                    ans ='X';
                    p=true;;
                }else if(cntp== 3){
                    ans='+';
                    p=true;
                }else if(cntz ==3){
                    ans='O';
                    p=true;
                }
                if(p){
                    cout<<ans<<endl;
                }else{
                    cout<<"DRAW"<<endl;
                }
            }
        }
    }
}
return 0;
}