#include<iostream>
using namespace std;

//Recursion
//fibonacci number
//0 1 1 2 3 5 8 .....

// thing is dependent on previous things
//pichhle pta nhi honge : base cases
int fibonacci(int n){
    //Base Cases:
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    //functional dependence
    return fibonacci(n-1) + fibonacci(n-2);
}


/*Write a recursive function to calculate factorial n
n = 0 : 1
n = 1 : 1
n = 4 : 24
*/
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return factorial(n-1) * n; 
}
/*Write a recursive function to calculate sum from 1 to n
1 : 1
2 : 3
5 : 15
10 : 55
*/
int sum(int n){
    if(n == 0){
        return 0;
    }
    return  sum(n-1)+n;
}
    



//TOWER OF HANOI
void fun(int n, char src, char dest, char aux){
    if(n == 1){
        cout<<"Move tower "<<n<<" from "<<src<<" to "<<dest<<endl;
        return;
    }
    fun(n-1, src, aux, dest);
    cout<<"Move tower "<<n<<" from "<<src<<" to "<<dest<<endl;
    fun(n-1,aux,dest,src);
}
//Josephus problem : geekforgeeks 
// solution samjhata
//code : cpp


int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
