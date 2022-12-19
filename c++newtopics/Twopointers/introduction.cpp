/*
Two pointers :- (i , j) where i and j are index.
*/

/*
 Given a sorted array find the total number of pairs having sum = k.
 example :  A = [1,4,4,5,5,5,6,6,11]
 k = 11  
 Pairs are (5,6) ,(5,6) 
 Total number of pairs are 6.
 */

/*
First solution :: Brute force (using 2 loops)

suppose that there is an element x and y in an array and x + y > k ,then x + y* is also greater than k where y*>y
and also x*+y >  k where x* > x 

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int arr[n];
int ans = 0;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;
int i = 0;
int j = n-1;
while(i < j){
    if(arr[i] + arr[j] > k){
        j--;
    }else if(arr[i] + arr[j] < k){
        i++;
    }else{
        int temp = arr[i];
        int temp1 = arr[j];
        int cnt = 0;
        int cnt1 = 0;
        while(arr[i] == temp){
            cnt++;
            i++;
        }
        while(arr[j] == temp1){
            cnt1++;
            j--;
        }
        if(temp != temp1){
            ans += cnt*cnt1;
        }else{
            ans += (cnt*(cnt-1))/2;
        }
    }
}
cout<<ans<<endl;
return 0;
}