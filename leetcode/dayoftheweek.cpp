#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool leapyear(int year){
    if((year%4 == 0 && year%100 != 0) || year%400 ==0){
        return true;
    }
    return false;
}

int days(int day,int month,int year){
    int count=0;
    int x=0;
    int mo[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1971;i<year;i++){
        if(leapyear(i)==true){
            count+=366;
            x++;
        }else{
            count+=365;
        }
    }
    for(int j=0;j<month-1;j++){
        count+=mo[j];
    }
    if(month>2){
        if(leapyear(year)==true){
            count+=1;
        }
    }
    count+=day;
    return count;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int day,month,year;
    cin>>day>>month>>year;
    int d1 = days(5,6,2023);
    int d2 = days(day,month,year);
    string week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int d = (d2-d1);
    int d = ((d%7)+7)%7;
    cout<<week[d]<<endl;
}
return 0;
}