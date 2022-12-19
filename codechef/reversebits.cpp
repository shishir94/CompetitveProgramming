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
    long long ans = 0;
    int c = 0;
    while(n>0){
        int x = n%2;
        c++;
        ans += x*(pow(2,32-c));
        n = n/2;
    }
    cout<<ans<<endl;
}
return 0;



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     for (int i = 0; i < n - 1; i++){
//         for (int j = 0; j < n - i - 1; j++){
//             if (arr[j] > arr[j + 1]){
//                int  a = arr[j];
//                int b = arr[j+1];
//                arr[j]=b;
//                arr[j+1]=a;
//             }
//         }
//     }  
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;  
// }
// return 0;
// }