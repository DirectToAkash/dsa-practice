/*
  #20  Missing number

  Array has n distinct numbers from 0..n, one is missing. Find it.
  Bonus: solve it in O(n) without sorting (think about the sum formula).

  Also submit on LeetCode: Missing Number #268

  Test cases (all must pass before you push):
    3 0 1  ->  2
    0 1  ->  2
    9 6 4 2 3 5 7 0 1  ->  8
*/

#include <iostream>
using namespace std;

void Missing(int arr[] , int n){
  int sum1=0;
  int sum2=0;
  int leftnum;
  for(int i=0;i<n;i++){
    sum1 = arr[i]+sum1;
  }
  for(int j=0;j<=n;j++){
    sum2 = j + sum2;
  }
  leftnum = sum2-sum1;
  cout<<leftnum;
}



int main() {
    int arr[]={0,1,2,3,4,6,7,8,9};
    int n = 9;

    Missing(arr,n);

    return 0;
}
