#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    string s = "shishir";
    int x = 0;
    for(int i=0;i<7;i++){
        cout<<s[i]<<" ";
        if(s[i] == 'i'){
            cout<<"hello"<<endl;
        }
        if(s[i] == 's'){
            x = x + 10;
            x = x - pow(i,2);
        }else if(s[i] == 'h'){
            x  = x + 20;
        }
    }
    cout<<endl;
    cout<<x<<endl;
    */
    //string size s.size()
    string arr[3] = {"hello", "dare", "how"};
    for(int i=0;i<3;i++){
        int k = arr[i].size();
        cout<<arr[i]<<" "<<k<<endl;
        for(int j=0;j<k;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}