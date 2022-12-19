/*
Dynamic Programming :: 
  Properties of Dynamic Programming :-
  1.  Optimal Substructure = If we can write reccurence relation, then priblem is said to have a optimal substructure.
  2.  Overlapping Subproblem = If our subproblems repeat, then a problem is said to have overlapping subproblem.

There is no need to compute twice. We will save our save our time and reduce the time complexity.
For example in fabonnici series we compute fib(2) and fib(1) twice.

Ways to handle overlapping subproblems::
1. Memoiztion(Top-Down) :: A lockup table is maintained and check before computation of any state. Recursion is involved.
2. Tabulation(Bottom-Up) :: Solution is built from base. It is an iterative process.

Minimization and maximization problems are generally solved with dp where we want exhaustive solution(Sometimes with binary 
search on answer).
"Find the number of ways" is also a very popular type of dp problems.
Wherever we can form recurrence relation or given in question can be solved using DP. (Sometimes with Dp exponentiation).
*/