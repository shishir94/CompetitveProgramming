#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(int n,int m,vector<vector<int>>&matrix, int target) {
    int i=0;
    while(i<n){
        int a=0;
        int b =m-1;
        while(a<=b){
            int mid=(a+b)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(matrix[i][mid]<target){
                a=mid+1;
            }else{
                b=mid-1;
            }
        }
        i++;
    }
    return false;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>matrix(n);
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        matrix.push_back(v);
        v.clear();
    }
    int target;
    cin>>target;
    cout<<searchMatrix(n,m,matrix,target)<<endl;
}
return 0;
}