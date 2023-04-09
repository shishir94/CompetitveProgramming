// Very interesting question
// Approach

/*

Sabse phele query puchenge (1,1) mann lo distance aaya cnt
to king ya to ---> 1) (1,cnt+1) to (cnt+1,cnt+1)
                   2)  (cnt+1,1) to (cnt+1,cnt+1)

agar cnt chota h number of rows and number of columns se tabhi 3 querry ask karni h.
dusri query puchenge  (1,cnt+1) mann lo ditance aaya cnt1
abb tisri querry puchenge  (cnt+1,cnt1+1) mann lo distance aaya cnt2
or agar cnt2  zero h to wahi par king h nhi to king ki position hogi (1+cnt,1+cnt1-cnt2);


edge cases
mann lo cnt bada h number of rows se to sirf do querry puchni h
2) querry --->  (1,cnt+1)  ---> distance aaya cnt1 ---> king ki position hogi (cnt1+1,cnt+1);

abb mann lo ki cnt bada h number of columns se:
2) querrt ---> (cnt+1,1) ---> distance aaya cnt1 --> king ki position hogi (1+cnt,1+cnt1);

*/


// Implementation :-
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int query(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    cout.flush();
    int a;
    cin>>a;
    return a;
}

void ans(int x,int y){
    cout<<"! "<<x<<" "<<y<<endl;
    cout.flush();
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int cnt = query(1,1);
    if(cnt >=n){
        int cnt1 = query(1,1+cnt);
        ans(1+cnt1,1+cnt);
    }else if(cnt >=m){
        int cnt1 = query(1+cnt,1);
        ans(1+cnt,1+cnt1);
    }else{
        int cnt1 = query(1,1+cnt);
        int cnt2 = query(1+cnt1,1+cnt);
        if(cnt2==0){
            ans(1+cnt1,1+cnt);
        }else{
            ans(1+cnt1,1+cnt-cnt2);
        }
    }

}
return 0;
}