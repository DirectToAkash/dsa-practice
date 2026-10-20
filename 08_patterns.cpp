/*
  #08  Pattern printing

  Read n. Print each pattern using nested loops.

  Test cases (all must pass before you push):
    n=3 square:
    * * *
    * * *
    * * *
    n=3 right triangle:
    *
    * *
    * * *
    n=3 pyramid:
      *
     ***
    *****
    n=3 number triangle:
    1
    1 2
    1 2 3
*/

#include <iostream>
using namespace std;



void square(int n){
  for(int i =0 ; i<n ; i++){
    for(int j=0;j<n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void triangle(int n){
  for(int i =1 ; i<=n ; i++){
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void numTriangle(int n){
  for(int i =1 ; i<=n ; i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    cout<<endl;
  }
}

void pyramid(int n) {
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for(int k=1 ; k<= 2*i - 1 ; k++){
      cout<<"*";
    }
cout << endl;
}
}

int main() {
  int n ;
  cin>>n;
    square(n);
    triangle(n);
    numTriangle(n);
    pyramid(n);

    return 0;
}
