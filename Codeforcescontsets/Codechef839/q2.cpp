#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
if((a<b&&a<c&&c<d&&b<d) || (c<a&&d<b&&c<d&&a<b) || (d<c&&b<a&&d<b&&c<a) || (b<d&&a<c&&b<a&&d<c)){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
return 0;
}