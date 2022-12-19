#include<iostream> 
using namespace std;

int main(){
    int x ,z ; 
    cin>>x;
    while(true){
        cin>>z;
        if(x < z){
            break;
        }
     
    }   
    int sum = 0;
    for(int i = 0 ; i < z ; i++){
            sum = sum + x + i;
            if(sum > z){
                cout<<i+1<<endl;
                break;
            }
    }
    
    
    return 0;
}