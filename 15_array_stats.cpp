/*
  #15  Array: max, min, sum, average

  Read n, then n numbers into an array. Print max, min, sum and average (average as decimal!).

  Test cases (all must pass before you push):
    5 | 1 2 3 4 5  ->  max 5, min 1, sum 15, avg 3
    3 | -5 0 5  ->  max 5, min -5, sum 0, avg 0
    4 | 7 7 7 7  ->  max 7, min 7, sum 28, avg 7
    3 | 1 2 2  ->  avg 1.66667 (not 1!)
*/

#include <iostream>
using namespace std;

int findMax(int arr[] , int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    return max;
  }

int findMin(int arr[] , int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    return min;
  }  

  int findsum(int arr[] , int size){
    int sum = 0;
    for(int i=0;i<size;i++){
      sum = sum + arr[i];
      }
      return sum;
    }

    double findAvg(int arr[] , int size){
    int sum = 0;
    
    for(int i=0;i<size;i++){
      sum = sum + arr[i];
      }
      return double(sum)/size;
    }
   
   
  

int main() {
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter size of array";
  for(int i = 0; i<n ; i++){
    cin>>arr[i];
  }

  cout<<"Max :"<<findMax(arr,n)<<endl;
  cout<<"Min :"<<findMin(arr,n)<<endl;
  cout<<"Sum :"<<findsum(arr,n)<<endl;
  cout<<"Avg :"<<findAvg(arr,n)<<endl;
}
