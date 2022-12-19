/*
How to find the time complexity of any solutions??
 Some tricks to find the time complexity are::
 1. Drop the non dominant terms
  for ex::
  int i;
  int k = 0;
  for(int i = 0;i<n;i++){
      k = i
      k++;
      x = y+1;
  }
  let the time taken by the statements inside this loop is k1.
  so total time taken by this loop is k1*n
  let the time taken by the code above the for loop is k2
  so total time taken by this program is k1*n+k2  here n is sufficiently high so we will drop k2 and time complexity becomes 
  k1*n

  2. Drop the constant terms.
  so we will drop k1 and hence the time complexity becomes O(n).

  3.Break the code into fragments.
    int i;
    int k = 0;
    for(int i = 0;i<n;i++){
        k = i
        k++;
        x = y+1;
    }
    for(int j = 0j<n;j++){
        k = i+1;
        k--;
    }
    time complexity of this code is k1 + k2*n + k3*n = n(k2+k3) = n*k4 = O(n)

    example :: 

    for(int i = 0i<ni++){
        for(int j = 0j<n;j++){
            k = i+1;
            k--;
        }
    }
    Time complexity for the above code is O(n^2).
*/