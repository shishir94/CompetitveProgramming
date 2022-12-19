#include<iostream>
using namespace std;


//return type specify : int, char, string, bool, float, double, void (when no return)
//function name
//parameters (number can be any) : type specify

void fun3(){
    cout<<"hello"<<endl;
    return;
}

void fun4(int k){
    k = 3;
    return;
}

int fun(int x){
    int y = x*x + 2;
    return y;
}

string fun2(string name, string surname, int age, double salary){
    string p;
    if(age > 10 && salary < 100.0){
        p = "lull praani";
    }else{
        p = "kull praani";
    }
    return p;
}

int main(){
    for(int i=1;i<10;i++){
        int u = fun(i);
        cout<<u<<endl;
    }
    cout<<fun(4)<<endl; //calling the function
    cout<<fun2("shishir", "kutta", 90, 89.89)<<endl;
    string n1 = "lull";
    string n2 = "chull";
    int a = 18;
    double tr = 123.45;
    cout<<fun2(n1,n2,a,tr)<<endl;
    fun3();
    //scope of function
    //function inside function
    //calling same function inside function : recursion
    int l = 10;
    fun4(l);
    cout<<l<<endl;
    return 0;
}