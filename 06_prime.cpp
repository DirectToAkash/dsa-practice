/*
  #06  Prime check + all primes 1..N

  Part A: read n, print whether it is prime.
  Part B: read N, print all primes from 1 to N.
  Bonus: loop only up to sqrt(n). Why does that work?

  Test cases (all must pass before you push):
    7  ->  Prime
    1  ->  Not prime (think why)
    0  ->  Not prime
    N=20  ->  2 3 5 7 11 13 17 19
*/

#include <iostream>
using namespace std;

int main() {
    int num , N;
    cin>>num;
    bool isPrime = true;
    if(num <= 1){
    isPrime = false;
}
    
      for(int i =2 ; i*i<=num ; i++){
        if(num%i==0){
          isPrime = false;
          break;
        }
      }
      if(isPrime==true){
        cout<<"Prime"<<endl;
      }
      else cout<<"Not prime"<<endl;

      cin>>N;
     for(int i=2 ; i<=N ;i++){
      isPrime = true;
          for(int j=2 ; j*j<=i ; j++){
            if(i%j == 0){
              isPrime = false;
              break;
            }
          }
          
          if(isPrime){
            cout<<i<<" ";
          }
        }cout<<endl;

      

    return 0;
}

