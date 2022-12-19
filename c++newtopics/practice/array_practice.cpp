#include<iostream>
using namespace std;

int main(){
    int temp1[7];
    int temp2[7] = {1,2,3,4,5,6};
    int temp3[] = {1,2,3,4,5,6};
    string temp4[7] = {"arr","hello"};
    cout<<temp2[3]<<endl;
    temp2[3] = 100;
    cout<<temp2[3]<<endl;
    for(int i=0;i<7;i++){
        cout<<temp2[i]<<endl;
    }
    for(int i=0;i<7;i++){
        temp2[i] = 2*temp2[i];
    }
    cout<<"new values"<<endl;
    for(int i=0;i<7;i++){
        cout<<temp2[i]<<endl;
    }
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i] = i*i;
    }
    int sum = 0;
    for(int i=0;i<100;i++){
        sum = sum + arr[i];
    }
    cout<<"sum = "<<sum<<endl;
    /*
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
    int arr1[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr1[i][j] = (i + j)*(i - j);
        }
    }
    cout<<arr1[0][3]<<endl;
    return 0;
}