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
    vector<string>words;
    for(int i=0;i<n;i++){
        string d;
        cin>>d;
        words.push_back(d);
        
    }
    vector<string>ans;
        for(char x ='a';x<='z';x++){
            bool p = true;
            string f ="";
            for(int i=0;i<n;i++){
                if(words[i].find(x) == string::npos){
                    p=false;
                    break;;
                }
            }
            if(p){
                f = f+x;
                ans.push_back(f);
                f ="";
            }
        }
        vector<string>s;
        for(int k=0;k<ans.size();k++){
            int cnt =0;
            int a =INT_MAX;
            for(int i=0;i<n;i++){
                for(int j=0;j<words[i].size();j++){
                    if(words[i][j] == ans[k][0]){
                        cnt++;
                    }
                }
                a = min(a,cnt);
            }
            cout<<a<<endl;
            for(int i=0;i<a;i++){
                s.push_back(ans[k]);
                
            }
        }
}
return 0;
}