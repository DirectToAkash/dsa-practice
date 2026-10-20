/*
  #09  First N Fibonacci numbers

  Read N, print the first N Fibonacci numbers.

  Test cases (all must pass before you push):
    N=1  ->  0
    N=5  ->  0 1 1 2 3
    N=10 ->  0 1 1 2 3 5 8 13 21 34
*/

#include <iostream>
using namespace std;

int main() {
  int n ;
  cin>>n;
  int a = 0;
  int b = 1;
 

  cout << a << " ";    
if (n > 1) cout << b << " ";  

  for(int i=3;i<=n;i++){
    int next = a+b;
    cout << next << " ";
    a=b;
    b=next;
  }



    return 0;
}
