#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long modular_power(long long x , long long y , long long p){
    long long res = 1;
    while(y>0){
        if(y%2==1){
            res = (res*x)%p;
        }
    y = y>>1;
    x = (x*x)%p;
    }
    return res%p;
}

// constructor function to create a Trie.
struct TrieNode{
    int data;  
    TrieNode *arr[2];
};
 

// Creating a trie node.
TrieNode *newNode(){
    TrieNode *node = new TrieNode;
    node->data = 0;
    node->arr[0] = node->arr[1] = NULL;
    return node;
}

void insert(TrieNode *root, int pXOR)
{
    TrieNode *node = root;
    for (int i=31; i>=0; i--)
    {
        bool val = pXOR & (1<<i);
        if (node->arr[val] == NULL)
            node->arr[val] = newNode();
        node = node->arr[val];
    }
    node->data = pXOR;
}
int query(TrieNode *root, int pXOR){
    TrieNode *node = root;
    for (int i=31; i>=0; i--){
        bool val = pXOR & (1<<i);
        if (node->arr[1-val]!=NULL)
            node = node->arr[1-val];
        else if (node->arr[val] != NULL)
            node = node->arr[val];
    }
    return pXOR^(node->data);
}

// Function to find the maximum xor of a subarray
int maxSubarrayXOR(long long arr[], int n){
    TrieNode *root = newNode();
    insert(root, 0);
    int ans = INT_MIN, pXOR =0;
    for (int i=0; i<n; i++){
        pXOR = pXOR^arr[i];
        insert(root, pXOR);
        ans = max(ans, query(root, pXOR));
    }
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarrayXOR(arr,n)<<endl;
}
return 0;
}