/*
 Find the time complexity of T(6)??

int function(int n){
    int i;
    if(n <= 0){
        return 0;
    }
    else{
        i = random(n-1)
        printf("tis is \n")
        return function(i) + function(n-1-i);
    }
}
T(6) --> T(0) + T(5) -> T(0) + T(4) -> T(0) + T(3) ->T(0) + T(2) -> T(0) + T(1) -> T(0) + T(0) 

since time complexity of random function is 1
Total time complexity is 6.

*/

// Find the time compexity of the follwing code which tests whether the given number is prime or not.

/*
int isprime(int n){
    if(n==1){
        return 0;
    }else{
        for(int i = 2;i*i<n;i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
Time complexity is k1+ k2(n^1/2) = O(n^1/2)
If the value of n is given then the time complexity is o(1).

*/