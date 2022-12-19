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
    int students[n];
    int sandwiches[n];
    for(int i = 0;i<n;i++){
        cin>>students[i];
    }
    for(int i = 0;i<n;i++){
        cin>>sandwiches[i];
    }
    queue<int>q;
    for(int i = 0;i<n;i++){
        q.push(students[i]);
    }
    int v = q.size();
    int c = 0;
    int i = 0;
    while(v > 0 && c < v){
        if(q.front()==sandwiches[i]){
            q.pop();
            i++;
            c = 0;
        }else{
            int g = q.front();
            q.pop();
            q.push(g);
            c++;
        }
    }
    cout<<q.size()<<endl;
}
return 0;
}