#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[a];
    int cnt = 0;
    for(int i = 0;i<a;i++){
        cin>>arr[i];
        if(arr[i] != c){
            cnt++;
        }   
    }
    if(c==0){
        if(cnt>=b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        if(cnt < b){
            cout<<"NO"<<endl;
        }else{
            int arr2[c];
            bool t = true;
            for(int i = 0;i<c;i++){
                int x = 0;
                for(int j = 0;j<a;j++){
                    if(i==arr[j]){
                        x = x+1;
                    }
                }
                arr2[i] = x;
            }
            for(int i = 0;i<c;i++){
                if(arr2[i]>0){
                    t = false;
                }else{
                    t = true;
                    break;
                }
            }  
            if(t == true){
                cout<<"NO"<<endl;
            }else{
                if(b>=c){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
return 0;
}