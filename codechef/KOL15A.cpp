#include<iostream>
using namespace std;

int main(){
    int a;
    string b;
    cin>>a;
    for(int i = 0 ;i<a;i++){
        cin>>b;
        int c = b.size();
        int sum = 0;
        for(int i=0;i<c;i++){
            if(b[i]>= '0' && b[i] <= '9'){
                sum = sum + b[i] - '0';
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}