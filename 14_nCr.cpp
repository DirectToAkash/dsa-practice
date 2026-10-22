/*
  #14  nCr using factorial

  Read n and r, print nCr = n! / (r! * (n-r)!) using your factorial function.

  Test cases (all must pass before you push):
    5 2  ->  10
    6 0  ->  1
    10 3  ->  120
*/

#include <iostream>
using namespace std;

long long factorial(int n){
long long total = 1;
  for(int i=n; i>0;i--){
    total = total*i;
  }
  return total;
}

long long nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main() {
    int n, r;
cin >> n >> r;
cout << nCr(n, r) << endl;

    return 0;
}
