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
    string x;
    cin>>x;
    int cnt1 = 0;
    int cnt2 = 0;
    if(n % 2 != 0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
        for(int i = 0;i<n;i++){
            if(x[i] == '1'){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        if(cnt1 == cnt2){
            cout<<"1 "<<n<<endl;
        }else if(cnt1 > cnt2){
            int d = n/2;
            int s = cnt1 - d;
            int cnt = 0;
            int f;
            int i = 0;
            while(i<n){
                if(x[i] == x[i+1] && x[i] == '1'){
                    cnt++;
                    i++;
                    if(cnt == s){
                        f = i;
                        cout<<f<<endl;
                        break;
                    }
                }
            }
            cout<<f<<endl;
            cout<<f+1<<" "<<f+s<<endl;
        }
    }
}
return 0;
}