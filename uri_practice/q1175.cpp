#include<iostream>
using namespace std;

int main(){
    int arr[20];
    for( int i = 0 ; i <20 ; i++){
        cin>>arr[i];
    }
    for( int i = 0 ; i < 20 ; i++){
        cout<<"N["<<i<<"] = "<<arr[19-i]<<endl;
            
    }

        
    
    return 0;
}