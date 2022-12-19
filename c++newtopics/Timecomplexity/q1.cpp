// Find the time complexity of the given function.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void x(int arr[],int length){
    int sum = 0;
    int product = 1;
    for(int i = 0;i<length;i++){
        sum +=arr[i];
    }
    for(int j = 0;j<length;j++){
        product*=arr[j];
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int arr[] = {3,4,5};
x(arr,3);
return 0;
}

/*
we will divide this code in 3 fragments code above loop1  = f1, loop1  = f2, loop2 = f3.
Total time = f1+f2+f3 = k1 + k2*n + k3*n = n(k2+k3) = O(n)

*/