#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long d = 1000000007;

int f2(int a, int b) {
    if (b == 0)
        return 1;
    int res = f2(a, b / 2);
    if (b % 2)
        return ((((res%d) * (res%d))%d) * a)%d;
    else
        return ((res%d) * (res%d))%d;
}

int f(int a){
    return f2(a,d-2);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;

int arr1[200000+1];
int arr2[200000+1];
arr1[0]=arr2[0]=1;
for(int i=1;i<200001;i++){
    arr2[i]= ((arr2[i-1]%d)*(f(i)%d))%d;
    arr1[i]= ((arr1[i-1]%d)*(i%d))%d;
}
while(t--){
    long long n;
    cin>>n;
    string s;
    string g;
    cin>>s>>g;
    int same = 0;
    int i=0;
    while(i<n){
        if(s[i]==g[i]){
            same++;
            
        }
        i++;
    }
    int flag =(n-same)%2;
    if(flag==1){
        int here = 0;
        cout<<here<<endl;
    }else{
        int x =n-same;
        int ans = f2(2,same);
        int ans2 = ((arr2[x/2]%d)*(arr2[x/2]%d))%d;
        int ans3 = ((arr1[x]%d)*(ans2%d))%d;
        int ans4 = ((ans%d)*(ans3%d))%d;
        cout<<ans4<<endl;
    }

}
return 0;
}
