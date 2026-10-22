/*
  #13  Functions: factorial, isPrime, gcd

  Write three functions and call them from main:
    long long factorial(int n)
    bool isPrime(int n)
    int gcd(int a, int b)

  Test cases (all must pass before you push):
    factorial(5)  ->  120
    factorial(0)  ->  1
    isPrime(13)  ->  true
    gcd(12, 18)  ->  6
*/

#include <iostream>
using namespace std;

void factorial(int n){
  int total = 1;
  for(int i=n; i>0;i--){
    total = total*i;
  }
  cout<<total<<endl;
}


  void isPrime(int n){
    if (n <= 1) {
        cout << "Not A Prime" << endl;
        return;
    }
    bool prime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
             prime = false;
    break;
        }
    }
    if (prime) cout << "Prime" << endl;
    else cout << "Not A Prime" << endl;
}

void gcd(int n , int m){
  int start = (n < m) ? n : m;
for(int i = start ; i>0 ; i--){
    if(m%i==0 && n%i==0){
      cout<<i<<endl;
      break;
    }
  }
}

int main() {
    factorial(0);
    isPrime(68);
    gcd(32,64);

    return 0;
}