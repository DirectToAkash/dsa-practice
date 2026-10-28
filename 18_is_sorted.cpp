/*
  #18  Check if array is sorted

  Print whether the array is sorted in non-decreasing order.

  Test cases (all must pass before you push):
    1 2 3 4  ->  Sorted
    1 2 2 3  ->  Sorted
    3 1 2  ->  Not sorted
    5  ->  Sorted
*/

#include <iostream>
using namespace std;



void sortArr(int arr[] , int n){
  bool isSorted = true;

  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
      isSorted =false ;
      break;
    }
    isSorted =true;
  }

  if(isSorted){
    cout<<"Sorted";
  }
  else{cout<<"Not Sorted";
  }
}

int main() {
  int n = 6;
    int arr[] = {5,3,2,2,5,12};
    sortArr(arr,n);

    return 0;
}
