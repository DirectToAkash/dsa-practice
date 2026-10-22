/*
  #10  Decimal <-> binary

  Part A: convert decimal to binary (no built-ins).
  Part B: convert a binary number (entered as int like 1011) to decimal.

  Test cases (all must pass before you push):
    10  ->  1010
    0  ->  0
    1011 (binary)  ->  11
    1111 (binary)  ->  15
*/



#include <iostream>
using namespace std;
#include <cmath>

void deciToBin(int n){
  int arr[32];
  int i =0;
  if(n==0){
    cout<<"0";
  }
  else{
  while(n!=0){
    int temp = n%2;
    arr[i] = temp;
    i++;
    n = n/2;
  }
}
 for(int j = i - 1 ; j>=0 ; j--){
  cout<<arr[j];
 }
}

void binToDeci(int n){
  int result = 0;
  int temp;
  int i=0;

  while(n!=0){
    temp = n%10;
  
    result = result + temp*pow(2,i);
    i++;
    n=n/10;
  }
cout<<result;
}

int main() {
    int n, m;
    cin >> n;
    deciToBin(n);
    cout << endl;

    cin >> m;
    binToDeci(m);
    return 0;
}
