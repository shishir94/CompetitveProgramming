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
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int B;
    cin>>B;
    int l = 0;
    int h = n-1;
    int mid;
    int a;
    while(l <= h){
        mid = (l+h)/2;
        if(mid+1<n && A[mid+1]>A[mid]){
            a = mid + 1;
            l = mid+1;
        }else{
            h = mid-1;
        }   
    }
   // cout<<a<<endl;
    int i = 0;
    int j = a-1;
    int med = 0;
    int v= 0;
    bool x = false;
    while(i <=j){
        med = (i+j)/2;
        if(A[med] == B){
            v = med;
            x = true;
            break;
        }else if(A[med]>B){
            j = med-1;
        }else{
            i = med+1;
        }
    }
    //cout<<x<<endl;
    if(x == true){
        cout<<v<<endl;
    }else if(x == false){
      //  cout<<"working"<<endl;
        int k = a+1;
        int p = n-1;
        int g = 0;
        int u = 0;
        bool f = false;
        while(k<=p){
            g = (k+p)/2;
            if(A[g] == B){
                u = g;
                f = true;
                break;
            }else if(A[g] > B){
                k = g+1;
            }else{
                p = g-1;
            }
        }
      //  cout<<f<<endl;
        if(f){
            cout<<u<<endl;
        }else{
            if(B == A[a]){
                cout<<a<<endl;
            }else{
                cout<<"-1"<<endl;
            }
        }
    }
}
return 0;
}