#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left,*right;
};


bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==NULL){
        return false;
    }
    if(root->left==NULL&&root->right==NULL&&targetSum-root->val==0){
        return true;
    }
    bool r = hasPathSum(root->left,targetSum-root->val);
    bool f = hasPathSum(root->right,targetSum-root->val);
    if(r==f&&r==false){
        return false;
    }
    return true;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}