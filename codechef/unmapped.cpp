#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>umap;
    umap["prince"] = 44;
    umap["gfg"] = 56;
    umap["hello world"] = 90;
   for(auto x : umap)
        cout<<x.first<<" "<<x.second<<endl;
       for(auto itr = umap.begin(); itr != umap.end();itr++) // itr is iterator valude deta h 
        cout<<itr->first<<" "<<itr->second<<endl;

        string key = "prince";
        if(umap.find(key) != umap.end()) //find function vo pata karta h ki key ussme h ki nhi
            cout<<"keyfound"<<endl;
        else
            cout<<"key not found"<<endl; 

        if(umap.find(key) != umap.end()){ 
            auto temp  = umap.find(key);
            cout<<"key is : "<<temp->first<<endl; // likne ka teraka 
            cout<<"value is :"<<temp->second<<endl;  
        }  
        umap.insert(make_pair("mobile" , 170000));  // insert is used to give some values 
            key = "hello world";;
            umap.erase(key); // erase kisi ko erase karna ho to

            for(auto x : umap)
            cout<<x.first<<" "<<x.second<<endl;  
            cout<<umap.size()<<endl;  


            int arr[] = {7 ,1 ,0 ,3,5 ,6,7,8,9,0,10};
            unordered_map<int,int>umapped;
            for(int i = 0;i<11;i++){
                int key = arr[i]; // default value of key is zero
                umapped[key]++;
            } 
            for(auto itr = umapped.begin(); itr != umapped.end();itr++) // itr is iterator value deta h 
            cout<<itr->first<<" "<<itr->second<<endl;  
            
    return 0;
}