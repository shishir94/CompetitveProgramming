#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Return true if b is subsequnce of a else return false
*/
bool isSub(string a, string b){
    int d = a.size();
    int e = b.size();
    int i = 0;
    int j = 0;
    while(i < d && j < e){
        if(b[j] != a[i]){
            i++;
        }else{
            i++;
            j++;
        }
    }
    if(j == e){
        return true;
    }else{
        return false;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
return 0;
}