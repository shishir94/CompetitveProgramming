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
    string x,c;
    cin>>x>>c;
    if(x[0]!='B'&&c[0]!='B'){
        cout<<"NO"<<endl;
    }else{
        bool f = false;
        if(x[0]=='B'){
            int a =1;
            int i;
            for(i=0;i<n;i++){
                if(a==1&&x[i]=='B'){
                    if(c[i]=='B'){
                        a=2;
                    }else if(i!=n-1&&x[i+1]!='B'){
                        break;
                    }
                }else if(a==2&&c[i]=='B'){
                    if(x[i]=='B'){
                        a=1;
                    }else if(i<n-1&&c[i+1]!='B'){
                        break;
                    }
                }else{
                    break;
                }
            }
            if(i==n){
                f=true;
            }
        }
        if(f==false){
           if(c[0]=='B'){
                int a =2;
                int i;
                for(i=0;i<n;i++){
                    if(a==1&&x[i]=='B'){
                        if(c[i]=='B'){
                            a=2;
                        }else if(i!=n-1&&x[i+1]!='B'){
                            break;
                        }
                    }else if(a==2&&c[i]=='B'){
                        if(x[i]=='B'){
                            a=1;
                        }else if(i<n-1&&c[i+1]!='B'){
                            break;
                        }
                    }else{
                        break;
                    }
                }
                if(i==n){
                    f=true;
                }
            } 
        }
        if(f){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
} 