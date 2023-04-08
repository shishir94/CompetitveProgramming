// KMP Algorithm ::
/*
This algorithm is used for searching pattern.
*/
// Approach ::
/*
Sabse phele ek prefix array banani padegi jisme hum ye store karenge ki maximum kitne length ka prefix array eqaul 
suffix aray ke.
*/

// code
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Creating prefix array::
vector<int> lps(string s){
    int n = s.size();
    vector<int>p(n,0);
    for(int i=1;i<n;i++){
        int j=p[i-1];
        while(j>0&&s[i]!=s[j]){
            j=p[j-1];
        }
        if(s[i]==s[j]){
            j++;
        }
        p[i]=j;
    }
    return p;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// Main code ::


string txt,pat;
cin>>txt>>pat;
int n=txt.size();
int m = pat.size();
vector<int>ans;
vector<int>prefix = lps(pat);
int  i=0;
int j=0;
while((n-i)>=(m-j)){
    if(txt[i]==pat[j]){
        i++;
        j++;
    }
    if(j==m){
        ans.push_back(i-j+1);
        j=prefix[j-1];
    }else if(i<n && txt[i]!=pat[j]){
        if(j!=0){
            j=prefix[j-1];
        }else{
            i++;
        }
    }
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}