#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isuppercase(string x, int n){
    int t= 0;
    for(int i = 0;i<n;i++){
        if(x[i] >= 'A' && x[i] <= 'Z'){
             t = 1;
             break;
        }
    }
    return t;
}
int islowercase(string x,int n){  
    int f = 0;
    for(int i = 0;i<n;i++){
        if(x[i] >= 'a' && x[i] <= 'z'){
             f = 1;
             break;
        }
    }
    return f;
} 
int isspecial(string x,int n){ 
    int g = 0;    
    for(int i = 0;i<n;i++){
        if(x[i] == '#' || x[i] == '@' || x[i] == '*' || x[i] == '&'){
            g = 1;
            break;
        }
    }
    return g;
}
int isnumber(string x,int n){  
    int h = 0;
    for(int i = 0;i<n;i++){
        if(x[i] >= '0' && x[i] <= '9'){
            h = 1;
            break;
        }
    }
    return h;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int q;
cin>>q;
for(int ii=1;ii<=q;ii++){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int a1 = isuppercase(s,n);
     int a2 = islowercase(s,n);
    int a3 = isspecial(s,n);
     int a4 = isnumber(s,n);
    cout<<"Case #"<<ii<<": ";
    if(a1 == 0){
        s = s+"A";
        cnt++;
    }  
    if(a2 == 0){
        s = s+"a";
        cnt++;
    }
    if(a3 == 0){
        s = s+"@";
        cnt++;
    }
    if(a4 == 0){
        s = s+"1";
        cnt++;
    }
    if(cnt+n >= 7){
        cout<<s<<endl;
    }else{
        int d = 7 -(cnt+n);
        for(int i = 0;i<d;i++){
            s = s+"1";
        }
        cout<<s<<endl;
    }
}    
return 0;
}