#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    long long n=s.length();
    string now;
    long long cnt=0;
    long long max_len=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
        }
        else
        {
            max_len=max(max_len,cnt);
            cnt=0;
        }
    }
    long long len=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') len++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1') len++;
        else break;
    }
    max_len=max(max_len,cnt);
    max_len=max(max_len,len);
    if(max_len==2*n)
    {
        cout<<n*n<<"\n";
        // return;
    }else if(max_len%2==1)
    {
        long long ans=(max_len/2+1)*(max_len/2+1);
        cout<<ans<<"\n";
    }
    else
    {
        long long ans=(max_len/2)*(max_len/2+1);
        cout<<ans<<"\n";
    }
}
return 0;
}