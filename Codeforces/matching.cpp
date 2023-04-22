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
        if(s[0]=='0'){
            cout<<"0"<<endl;
        }else{
        long long ans =1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='?'&& i==0){
                    ans = ans*9;
                }else if(s[i]=='?'&&i!=0){
                    ans=ans*10;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
    }