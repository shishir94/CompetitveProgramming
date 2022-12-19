/*
To compare 2 different algorithm we used "asymptotic notations". 
3 asymptoptic notations are there ::
1.  Big O
2.  Big theta 
3.  Big omega


1. BIG Oh(O) :: A function f(n) is said to be O(gn) iff there exist constant c and a constant n0 such that "0<= f(n)<=c*g(n)" 
                for all n > n0 where n is input f(n) is time gn is a function inside big O . here we consider the minimum
                value of g(n) for time complexity.


2. BIG OMEGA :: A function f(n) is said to be Omega(gn) iff there exist constant c and a constant n0 such that "0<= c*g(n)<=f(n)" 
                for all n > n0 where n is input f(n) is time .


3.  BIG THETA ::  A function f(n) is said to be theat(gn) iff there exist constant c and a constant n0 such that 
                  "0<= c2*g(n)<=f(n)" and  "0<= f(n)<=c1*g(n)" for all n > n0 where n is input f(n) is time.
                  main condition :: c2*g(n) <= f(n) <= c1*g(n).

Increasing order of runtime::
 1 < log(n) < n < nlog(n) < n^2 < n^3 < 2^ n <  n^n
 
*/