/*

Given an array of integers we have search a particular number.
Arroy = 4 , 8 ,10,12,15,16,2,8
serach element 2.

linear search check each index of an array if it is equal to 2 return index else return -1.
Time coplexity :: O(n).
Valid for sorted or unsorted array.

*/

// Linear Search for searching a particular number in an arry.
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
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int a = 0;
    bool t = true;
    for(int i = 0;i<n;i++){
        if(arr[i] == b){
            a = i;
            t = false;
            break;
        }else{
            t = true;
        }
    }
    if(t){
        cout<<"-1"<<endl;
    }else{
        cout<<a<<endl;
    }
}
return 0;
}


/*
// Binary Search :: 
Example :: Suppose we have a book and we have to open a page number 238 . Our appoarch is that we will first open the middle
           page of book and if the page number of middle page is less than the page number we have to open then we will 
           open the middle page of the next half and if the page number of middle page is greater than we will open middle
           page of first half and simmilary we can do this and opens a required page.
Condition of Binary Search :: Array must be sorted.
Array = 2 , 8 ,14 , 32 , 66 , 100,104,200,800
Search element = 200.
For this search linear search is good but if we have to search for 100 for this binary search is good.

*/

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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int g = 0;
    if(n == 2){
        if(arr[0] == b){
            g = 0;;
        }else if(arr[1] == b){
            g = 1;
        }else if(b > arr[1]){
            g = 2;
        }else if(arr[0]>b){
            g = 0;
        }else{
            g = 1;
        }
    }else{
        int low = 0;
        int a = 0;
        int high = n-1;
        int mid;
        bool x = true;
        while(high >= low){
            mid = (low+high)/2;
            if(arr[mid] == b){
                a = mid;
                x = false;
                break;
            }else if(arr[mid]> b){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        g = mid;
      //  cout<<g<<endl;
        if(x == false){
            g = a;
        }else{
            if(arr[g] > b){
                g = g;
            }else{
                g = g+1;
            }
        }
    }
    cout<<g<<endl;
}
return 0;
}