/*
PROBLEM STATEMENT::

The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire 
stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the 
steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.

Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs 
have different sizes and a bigger disc cannot be put on the top of a smaller disc.  

SOLUTION APPORACH ::
1. First move the first disc to the second pole and remaining (n-1) discs to 3 pole and then move first disc to 3 pole.
By doing this we cannot place any other disc on pole 2.
Hence this solution won't works.

2. Move all dics except the last one to pole 2 by using pole 3. Now move one last dics to pole 3.Now move all the disc on 2nd
pole to pole 3 using pole 1.


Pseudo code ::
BASE CASE n==1 Move nth disc from pole 1 to pole 3
Now recusive case :: Move (n-1) discs from pole 1 to pole 2 using pole 3
    Now move nth disc from pole 1 to pole 3
Now recursive case:: Move rest (n-1) dics from pole 2 to pole 3 using pole 1.

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void TowerofHanoi(int n,char source,char destination,char helper){
    if(n==1){
        cout<<"Move tower "<<n<<" from "<<source<<" to "<<destination<<endl;
        return;
    }
    TowerofHanoi(n-1,source,helper,destination);
    cout<<"Move tower "<<n<<" from "<<source<<" to "<<destination<<endl;
    TowerofHanoi(n-1,helper,destination,source);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    TowerofHanoi(n,a,c,b);
    cout<<pow(2,n)-1<<endl;
}
return 0;
}