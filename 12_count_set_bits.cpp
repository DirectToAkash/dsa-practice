/*
  #12  Count set bits

  Count the number of 1s in the binary form of n.

  Also submit on LeetCode: Number of 1 Bits #191

  Test cases (all must pass before you push):
    11 (1011)  ->  3
    128 (10000000)  ->  1
    0  ->  0
*/

#include <iostream>
using namespace std;



int main() {
  int n ;
  int temp;
  int count =0 ;
  cin>>n;

  while(n!=0){
    temp=n%2;
    if(temp==1){
      count++;
    }
    n=n/2;
  }
  cout<<count;
}
