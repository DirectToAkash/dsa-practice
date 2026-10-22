/*
  #11  Power of two

  Check if n is a power of 2 using the & operator (hint: look at n and n-1 in binary).

  Also submit on LeetCode: Power of Two #231

  Test cases (all must pass before you push):
    1  ->  true
    16  ->  true
    18  ->  false
    0  ->  false
*/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if (n <= 0) return false;       // step 1

    while (n % 2 == 0) {         // step 2: while n is EVEN…
        n = n /2;               // …cut it in half
    }

    return n == 1;               // step 3: is what's left equal to…?
}

int main(){
    int n;
    cin >> n;
    if (isPowerOfTwo(n)) cout << "true" << endl;
    else cout << "false" << endl;
}