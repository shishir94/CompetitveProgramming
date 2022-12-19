#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string b;
    int arr1[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string arr2[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    for(int i = 12; i >= 0 ; i--){
        if(n >= arr1[i]){
            int a = n/arr1[i];
            n = n %arr1[i];
            for(int j = 0 ; j < a ; j++){
                b = b + arr2[i];
            }
        }
    }
    cout<<b<<endl;
    return 0;
}