#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left,*right;
};

int maxDepth(TreeNode* root) {
    if(root!=NULL){
        return 0;
    }
    int a = maxDepth(root->left);
    int b = maxDepth(root->right);
    return max(a,b)+1;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}