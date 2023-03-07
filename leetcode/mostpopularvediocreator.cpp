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
    string creators[n];

    string ids[n];
    int views[n];

    for(int i=0;i<n;i++){
        cin>>creators[i];
    }


    for(int i=0;i<n;i++){
        cin>>ids[i];
    }


    for(int i=0;i<n;i++){
        cin>>views[i];
    }
    cout<<endl;


    unordered_map<string,int>k;
    for(int i=0;i<n;i++){
        if(k.find(creators[i])!= k.end()){
            if(k[creators[i]]<views[i]){
                k[creators[i]]=views[i];
            }
        }else{
            k[creators[i]]=views[i];
        }

    }
    for(auto itr = k.begin();itr!=k.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
        
    }   
    cout<<endl;


    unordered_map<string,string>mp;
    for(int i = 0;i<n;i++){
        if(mp.find(creators[i])!=mp.end()){
            if(mp[creators[i]]>ids[i]&&views[i]==k[creators[i]]){
                
                mp[creators[i]]=ids[i];
            }
        }else{
            if(views[i]==k[creators[i]]){
                cout<<k[creators[i]]<<" "<<views[i]<<endl;
                cout<<ids[i]<<endl;
                mp[creators[i]]=ids[i];
            }
        }
    }
    for(auto itr = mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
        
    }   
    cout<<endl;


    unordered_map<string,long long>m;
    for(int i=0;i<n;i++){
        if(m.find(creators[i])!=m.end()){
            long long x = m[creators[i]];
            m[creators[i]]=x+views[i];
        }else{
            m[creators[i]]=views[i];
        }
    }
    for(auto itr = m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
        
    }   
    cout<<endl;



    vector<long long>v;
    for(auto itr = m.begin();itr!=m.end();itr++){
        v.push_back(itr->second);
    }
    sort(v.begin(),v.end());
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    vector<string>c;
    for(auto itr=m.begin();itr!=m.end();itr++){
        if(itr->second==v[v.size()-1]){
            c.push_back(itr->first);
        }
    }
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;


    vector<pair<string,string>>q;
    for(int i=0;i<c.size();i++){
        // q.push_back(make_pair(c[i],mp[c[i]]));
        cout<<c[i]<<" "<<mp[c[i]]<<endl;
    }
}
return 0;
}

