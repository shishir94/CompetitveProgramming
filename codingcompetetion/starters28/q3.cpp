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
    unordered_set<int> h;
    int c;
    for(int i = 0 ;i<n;i++){
        cin>>c;
        h.insert(c);
    }

int arr[8] = {6,13,20,27,7,14,21,28};
for(int i = 0;i<8;i++){
    h.insert(arr[i]);
}
int x = h.size();
cout<<x<<endl;

}
return 0;
}